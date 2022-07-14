/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the trim_string function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

char *trim_string(char *string);

Test(trim_string, test_one)
{
    char *str = "42+12";

    cr_assert_str_eq(trim_string(str), "42+12");
}

Test(trim_string, test_two)
{
    char *str = " 42+12";

    cr_assert_str_eq(trim_string(str), "42+12");
}

Test(trim_string, test_three)
{
    char *str = "                        42+12";

    cr_assert_str_eq(trim_string(str), "42+12");
}

Test(trim_string, test_four)
{
    char *str = "42  +    12";

    cr_assert_str_eq(trim_string(str), "42  +    12");
}

Test(trim_string, test_five)
{
    char *str = "                        42  +    12";

    cr_assert_str_eq(trim_string(str), "42  +    12");
}
