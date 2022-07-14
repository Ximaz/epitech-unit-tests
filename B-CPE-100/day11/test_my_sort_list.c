/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_sort_list function.
*/

#include <stdlib.h>
#include <string.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
void my_sort_list(linked_list_t **begin, int (*cmp)());

static int cmp(void *d1, void *d2)
{
    return my_strcmp(d1, d2) > 0 ? 0 : 1;
}

Test(my_sort_list, test_one)
{
    char *const av[] = { "4", "3", "2", "1" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_sort_list(&params, cmp);
    tail = params;
    for (int i = 0; i < 4; i++) {
        cr_assert_eq(atoi(tail->data), i + 1);
        tail = tail->next;
    }
    free(params);
}

Test(my_sort_list, test_two)
{
    char *const av[] = { "1", "2", "3", "4" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_sort_list(&params, cmp);
    tail = params;
    for (int i = 0; i < 4; i++)
    {
        cr_assert_eq(atoi(tail->data), i + 1);
        tail = tail->next;
    }
    free(params);
}

Test(my_sort_list, test_three)
{
    char *const av[] = { "4", "3", "2", "1" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;
    int i = 0;

    my_sort_list(&params, cmp);
    tail = params;
    while (tail) {
        cr_assert_eq(atoi(tail->data), i++ + 1);
        tail = tail->next;
    }
    free(params);
}

Test(my_sort_list, test_four)
{
    char *const av[] = { "1", "2", "3", "4" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;
    int i = 0;

    my_sort_list(&params, cmp);
    tail = params;
    while (tail) {
        cr_assert_eq(atoi(tail->data), i++ + 1);
        tail = tail->next;
    }
    free(params);
}
