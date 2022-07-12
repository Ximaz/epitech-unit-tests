/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_rev_list function.
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
void my_rev_list(linked_list_t **begin);

Test(my_rev_list, test_one)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_rev_list(&params);
    tail = params;
    for (int i = 0; i < 4; i++)
    {
        cr_assert_str_eq(tail->data, av[i]);
        tail = tail->next;
    }
    free(params);
}

Test(my_rev_list, test_three)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail = params;

    my_rev_list(&params);
    tail = params;
    for (int i = 0; i < 2; i++)
    {
        cr_assert_str_eq(tail->data, av[i]);
        tail = tail->next;
    }
    free(params);
}

Test(my_rev_list, test_two)
{
    char *const av[] = { 0 };
    linked_list_t *params = my_params_to_list(0, av);
    my_rev_list(&params);
    cr_assert_eq(params, 0);
}
