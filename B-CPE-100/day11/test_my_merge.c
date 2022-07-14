/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_merge function.
*/

#include <stdlib.h>
#include <string.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
void my_merge(linked_list_t **begin1, linked_list_t *begin2, int (*cmp)());
void my_sort_list(linked_list_t **begin, int (*cmp)());

static int cmp(void *d1, void *d2)
{
    return atoi(d1) < atoi(d2);
}

Test(my_merge, test_one)
{
    char *const av1[] = { "9", "4", "6", "0" };
    char *const av2[] = { "2", "1", "8", "5", "3", "7" };
    linked_list_t *params1 = my_params_to_list(4, av1);
    linked_list_t *params2 = my_params_to_list(6, av2);
    linked_list_t *tail;
    int i = 0;

    my_sort_list(&params1, cmp);
    my_sort_list(&params2, cmp);
    my_merge(&params1, params2, cmp);
    tail = params1;
    while (tail) {
        cr_assert_eq(atoi(tail->data), i++);
        tail = tail->next;
    }
    free(params2);
    free(params1);
}
