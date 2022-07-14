/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the remove_space function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

char *remove_space(char *string);

Test(remove_space, test_one)
{
    char str[] = "42+12";

    cr_assert_str_eq(remove_space(str), "42+12");
}

Test(remove_space, test_two)
{
    char str[] = " 42+12";

    cr_assert_str_eq(remove_space(str), "42+12");
}

Test(remove_space, test_three)
{
    char str[] = "                        42+12";

    cr_assert_str_eq(remove_space(str), "42+12");
}

Test(remove_space, test_four)
{
    char str[] = "42  +    12";

    cr_assert_str_eq(remove_space(str), "42+12");
}

Test(remove_space, test_five)
{
    char str[] = "                        42  +    12  ";

    cr_assert_str_eq(remove_space(str), "42+12");
}
