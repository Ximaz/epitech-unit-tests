/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_list_size function.
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
int my_list_size(linked_list_t const *begin);

Test(my_list_size, test_one)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(4, av);
    int list_size = my_list_size(params);
    cr_assert_eq(list_size, 4);
    free(params);
}

Test(my_list_size, test_two)
{
    char *const av[] = { 0 };
    linked_list_t *params = my_params_to_list(0, av);
    int list_size = my_list_size(params);
    cr_assert_eq(list_size, 0);
}

Test(my_list_size, test_three)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(2, av);
    int list_size = my_list_size(params);
    cr_assert_eq(list_size, 2);
    free(params);
}
