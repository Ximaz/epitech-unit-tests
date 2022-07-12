/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_apply_on_matching_nodes function.
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(), void const *data_ref, int (*cmp)());

static int f(void *data)
{
    data = (void *)my_revstr((char *)data);
    return 0;
}

static int cmp(void *data, void *data_ref)
{
    return (my_strlen(data) == my_strlen(data_ref)) ? 0 : 1;
}

Test(my_apply_on_matching_nodes, test_one)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_apply_on_matching_nodes(params, f, "XXXX", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "3gra");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "2gra");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "tset");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "./a.out");
    free(params);
}

Test(my_apply_on_matching_nodes, test_two)
{
    char *const av[] = {0};
    linked_list_t *params = my_params_to_list(0, av);
    my_apply_on_matching_nodes(params, f, "", cmp);
    cr_assert_eq(params, 0);
}

Test(my_apply_on_matching_nodes, test_three)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail;

    my_apply_on_matching_nodes(params, f, "XXXXXXX", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "test");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "tuo.a/.");
    free(params);
}
