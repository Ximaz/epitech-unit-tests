/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_add_in_sorted_list function.
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
#include <criterion/criterion.h>

linked_list_t *my_params_to_list(int ac, char *const *av);
void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)());

static int cmp(void *d1, void *d2)
{
    return atoi(d1) < atoi(d2);
}

Test(my_add_in_sorted_list, test_one)
{
    char *const av[] = {"5", "4", "2", "1"};
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_add_in_sorted_list(&params, "3", cmp);
    my_add_in_sorted_list(&params, "7", cmp);
    my_add_in_sorted_list(&params, "0", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "0");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "1");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "2");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "3");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "4");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "5");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "7");
    tail = tail->next;
    cr_assert_eq(tail, 0);
    free(params);
}

Test(my_add_in_sorted_list, test_two)
{
    char *const av[] = {"5", "4", "2", "1"};
    linked_list_t *params = my_params_to_list(4, av);
    linked_list_t *tail;

    my_add_in_sorted_list(&params, "-5", cmp);
    my_add_in_sorted_list(&params, "72", cmp);
    my_add_in_sorted_list(&params, "-10", cmp);
    tail = params;
    cr_assert_str_eq(tail->data, "-10");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "-5");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "1");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "2");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "4");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "5");
    tail = tail->next;
    cr_assert_str_eq(tail->data, "72");
    tail = tail->next;
    cr_assert_eq(tail, 0);
    free(params);
}
