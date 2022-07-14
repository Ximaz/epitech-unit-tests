/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_concat_list function.
*/

#include <stdlib.h>
#include <string.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);

Test(my_concat_list, test_one)
{
    char *const av1[] = { "4", "3", "2", "1" };
    char *const av2[] = { "6", "5" };
    linked_list_t *params1 = my_params_to_list(4, av1);
    linked_list_t *params2 = my_params_to_list(2, av2);
    linked_list_t *tail;

    my_concat_list(&params1, params2);
    tail = params1;
    for (int i = 0; i < 6; i++)
    {
        cr_assert_eq(atoi(tail->data), i + 1);
        tail = tail->next;
    }
    free(params2);
    free(params1);
}

Test(my_concat_list, test_two)
{
    char *const av1[] = { "4", "3", "2", "1" };
    char *const av2[] = { 0 };
    linked_list_t *params1 = my_params_to_list(2, av1);
    linked_list_t *params2 = my_params_to_list(0, av2);
    linked_list_t *tail;

    cr_assert_eq(params2, 0);
    my_concat_list(&params1, params2);
    tail = params1;
    cr_assert_str_eq(tail->data, "3");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "4");
    tail = tail->next;
    cr_assert_eq(tail, 0);
    free(params1);
}
