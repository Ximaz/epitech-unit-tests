/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_delete_nodes function.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)());

static int cmp(void *data, void *data_ref)
{
    return (my_strlen(data) == my_strlen(data_ref)) ? 0 : 1;
}

Test(my_delete_nodes, test_one)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_delete_nodes(&params, "XXXX", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "./a.out");
    cr_assert_eq(tail->next, 0);
    free(params);
}

Test(my_delete_nodes, test_three)
{
    char *const av[] = { "./a.out", "test", "arg2", "arg3" };
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail = params;

    my_delete_nodes(&params, "XXXXXXX", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "test");
    tail = tail->next;
    cr_assert_eq(tail, 0);
    free(params);
}

Test(my_delete_nodes, test_two)
{
    char *const av[] = { 0 };
    linked_list_t *params = my_params_to_list(0, av);
    my_delete_nodes(&params, "XXXXXXX", cmp);
    cr_assert_eq(params, 0);
}
