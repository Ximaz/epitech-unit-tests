/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strtol function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

long int my_strtol(char *str, char **endptr, int base);

Test(my_strtol, test_one)
{
    char *number1 = "-FEA0486";
    char *number2 = "-FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_two)
{
    char *number1 = "      -FEA0486";
    char *number2 = "      -FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_three)
{
    char *number1 = "      +FEA0486";
    char *number2 = "      +FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_four)
{
    char *number1 = "      +FEA0486";
    char *number2 = "      +FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_five)
{
    char *number1 = "      FEA0486";
    char *number2 = "      FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_six)
{
    char *number1 = "FEA0486";
    char *number2 = "FEA0486";
    long int n1 = strtol(number1, &number1, 16);
    long int n2 = my_strtol(number2, &number2, 16);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_seven)
{
    char *number1 = "ZIK0ZK";
    char *number2 = "ZIK0ZK";
    long int n1 = strtol(number1, &number1, 36);
    long int n2 = my_strtol(number2, &number2, 36);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_eight)
{
    char *number1 = "";
    char *number2 = "";
    long int n1 = strtol(number1, &number1, 36);
    long int n2 = my_strtol(number2, &number2, 36);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_nine)
{
    char *number1 = "10";
    char *number2 = "10";
    long int n1 = strtol(number1, &number1, 1);
    long int n2 = my_strtol(number2, &number2, 1);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_ten)
{
    char *number1 = "10";
    char *number2 = "10";
    long int n1 = strtol(number1, &number1, 0);
    long int n2 = my_strtol(number2, &number2, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_eleven)
{
    char *number1 = "1A0";
    char *number2 = "1A0";
    long int n1 = strtol(number1, &number1, 0);
    long int n2 = my_strtol(number2, &number2, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_twelve)
{
    char *number1 = "-1A0";
    char *number2 = "-1A0";
    long int n1 = strtol(number1, &number1, 0);
    long int n2 = my_strtol(number2, &number2, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_thirteen)
{
    char *number1 = "-";
    char *number2 = "-";
    long int n1 = strtol(number1, &number1, 0);
    long int n2 = my_strtol(number2, &number2, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_fourteen)
{
    char *number1 = "ZIK0ZKZZZZZZ";
    char *number2 = "ZIK0ZKZZZZZZ";
    long int n1 = strtol(number1, &number1, 0);
    long int n2 = my_strtol(number2, &number2, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_fifteen)
{
    char *number1 = "ZIK0ZKZZZZZZ";
    char *number2 = "ZIK0ZKZZZZZZ";
    long int n1 = strtol(number1, 0, 0);
    long int n2 = my_strtol(number2, 0, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

Test(my_strtol, test_sixteen)
{
    char *number1 = "-ZIK0ZKZZZZZZ";
    char *number2 = "-ZIK0ZKZZZZZZ";
    long int n1 = strtol(number1, 0, 0);
    long int n2 = my_strtol(number2, 0, 0);

    cr_assert_eq(n1, n2);
    cr_assert_str_eq(number1, number2);
}

