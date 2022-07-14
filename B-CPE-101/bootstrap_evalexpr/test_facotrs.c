/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the facotrs function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

int factors(char **str_ptr);

Test(factors, test_one)
{
    char *summand = "       42*12";

    cr_assert_eq(factors(&summand), 504);
}

Test(factors, test_two)
{
    char *summand = "42/12";

    cr_assert_eq(factors(&summand), 3);
}

Test(factors, test_three)
{
    char *summand = "       42/12";

    cr_assert_eq(factors(&summand), 3);
}

Test(factors, test_four)
{
    char *summand = "42*12";

    cr_assert_eq(factors(&summand), 504);
}

Test(factors, test_five)
{
    char *summand = "2547/287*327278/28737*287287/3287387";

    cr_assert_eq(factors(&summand), 7);
}
