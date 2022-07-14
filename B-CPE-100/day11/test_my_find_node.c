/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_find_node function.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)());

static int cmp(void *data, void *data_ref)
{
    return (my_strlen(data) == my_strlen(data_ref)) ? 0 : 1;
}

Test(my_find_node, test_one)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail = my_find_node(params,  "XXXX", cmp);

    cr_assert_str_eq(tail->data, "arg3");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "arg2");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "test");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "./a.out");
    free(params);
}

Test(my_find_node, test_two)
{
    char *const av[] = {0};
    linked_list_t *params = my_params_to_list(0, av);
    linked_list_t *tail = my_find_node(params,  "", cmp);

    cr_assert_eq(tail, 0);
    cr_assert_eq(params, 0);
}

Test(my_find_node, test_three)
{
    char *const av[] = {"./a.out", "test", "arg2", "arg3"};
    linked_list_t *params = my_params_to_list(2, av);
    linked_list_t *tail = my_find_node(params, "XXXXXXX", cmp);

    cr_assert_str_eq(tail->data, "./a.out");
    tail = tail->next;
    cr_assert_eq(tail, 0);
    free(params);
}
