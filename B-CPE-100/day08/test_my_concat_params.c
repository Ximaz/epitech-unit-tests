/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_concat_params function.
*/

#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>

char *concat_params(int argc, char **argv);

Test(concat_params, test_one)
{
    char *argv[] = {"Bonjour le monde !", "Comment", "vas", "-", "tu", "?"};
    int argc = 6;
    char *str = concat_params(argc, argv);
    cr_assert_str_eq(str, "Bonjour le monde !\nComment\nvas\n-\ntu\n?");
    free(str);
}

Test(concat_params, test_two)
{
    char *argv[] = {0};
    int argc = 0;
    char *str = concat_params(argc, argv);
    cr_assert_eq(str, 0);
    if (str)
        free(str);
}

Test(concat_params, test_three)
{
    char *argv[] = {0};
    int argc = -10;
    char *str = concat_params(argc, argv);
    cr_assert_str_eq(str, "");
    free(str);
}

Test(concat_params, test_four)
{
    char *argv[] = {"Coucou", "le", "monde"};
    int argc = -10;
    char *str = concat_params(argc, argv);
    cr_assert_str_eq(str, "");
    free(str);
}

Test(concat_params, test_five)
{
    char *argv[] = {"Coucou", "le", "monde"};
    int argc = 2;
    char *str = concat_params(argc, argv);
    cr_assert_str_eq(str, "Coucou\nle");
    free(str);
}
