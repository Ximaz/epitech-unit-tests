/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_params_to_array function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "../include/my_info_param.h"

struct info_param *my_params_to_array(int ac, char **av);

static void free_array(struct info_param *array)
{
    int i = 0;

    while (array->word_array[i])
        free(array->word_array[i++]);
    free(array->word_array);
    free(array);
}

Test(my_params_to_array, test_one)
{
    int ac = 1;
    char *av[] = {"main.c", 0};
    struct info_param *params = my_params_to_array(ac, av);
    cr_assert_str_eq(params[0].copy, params[0].str);
    cr_assert_str_eq(params[0].word_array[0], "main");
    cr_assert_str_eq(params[0].word_array[1], "c");
    free_array(params);
}

Test(my_params_to_array, test_two)
{
    int ac = 0;
    char *av[] = {0};
    struct info_param *params = my_params_to_array(ac, av);
    cr_assert(!params);
    free(params);
}

Test(my_params_to_array, test_three)
{
    int ac = 5;
    char *av[] = {"a", "b", "c", "d", "e", 0};
    struct info_param *params = my_params_to_array(ac, av);
    for (int i = 0; i < ac; i++)
    {
        cr_assert_str_eq(params[i].copy, params[i].str);
        cr_assert_str_eq(params[i].word_array[0], av[i]);
    }
    free_array(params);
}
