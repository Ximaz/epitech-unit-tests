/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_params_to_list function.
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);

Test(my_params_to_list, test_one)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail = params;

    for (int i = 0, j = 3; i < 4; i++, j--)
    {
        cr_assert_str_eq(tail->data, av[j]);
        tail = tail->next;
    }
    free(params);
}

Test(my_params_to_list, test_three)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail = params;

    for (int i = 0, j = 1; i < 2; i++, j--)
    {
        cr_assert_str_eq(tail->data, av[j]);
        tail = tail->next;
    }
    free(params);
}

Test(my_params_to_list, test_two)
{
    char *const av[] = { 0 };
    linked_list_t *params = my_params_to_list(0, av);
    cr_assert_eq(params, 0);
}
