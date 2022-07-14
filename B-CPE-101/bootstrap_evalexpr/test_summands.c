/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the summands function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

int summands(char **str_ptr);

Test(summands, test_one)
{
    char *summand = "42+12";

    cr_assert_eq(summands(&summand), 54);
}

Test(summands, test_two)
{
    char *summand = "42-12";

    cr_assert_eq(summands(&summand), 30);
}

Test(summands, test_three)
{
    char *summand = "-42-12";

    cr_assert_eq(summands(&summand), -54);
}

Test(summands, test_four)
{
    char *summand = "-42+12";

    cr_assert_eq(summands(&summand), -30);
}

Test(summands, test_five)
{
    char *summand = "2547-28763+327278-28737+287287+2872874-3287387+321357";

    cr_assert_eq(summands(&summand), 466456);
}
