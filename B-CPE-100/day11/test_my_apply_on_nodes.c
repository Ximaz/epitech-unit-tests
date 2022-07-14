/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_apply_on_nodes function.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));

static int f(void *data)
{
    data = (void *)my_revstr((char *)data);
    return 0;
}

Test(my_apply_on_nodes, test_one)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_apply_on_nodes(params, f);
    tail = params;
    cr_assert_str_eq(tail->data, "3gra");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "2gra");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "tset");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "tuo.a/.");
    free(params);
}

Test(my_apply_on_nodes, test_two)
{
    char *const av[] = {0};
    linked_list_t *params = my_params_to_list(0, av);
    my_apply_on_nodes(params, f);
    cr_assert_eq(params, 0);
}

Test(my_apply_on_nodes, test_three)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail;

    my_apply_on_nodes(params, f);
    tail = params;
    cr_assert_str_eq(tail->data, "tset");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "tuo.a/.");
    free(params);
}
