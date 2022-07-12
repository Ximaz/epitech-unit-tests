/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the convert_base function.
*/

#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>

char *convert_base(char const *nbr, char const *base_from, char const *base_to);

Test(convert_base, test_one)
{
    char *n = convert_base("0", "0123456789", "0");
    cr_assert_str_eq(n, "");
    free(n);
}

Test(convert_base, test_two)
{
    char *n = convert_base("9", "0123456789", "0");
    cr_assert_str_eq(n, "000000000");
    free(n);
}

Test(convert_base, test_three)
{
    char *n = convert_base("FFFF", "0123456789ABCDEF", "01");
    cr_assert_str_eq(n, "1111111111111111");
    free(n);
}

Test(convert_base, test_four)
{
    char *n = convert_base("-9", "0123456789", "0");
    cr_assert_str_eq(n, "-000000000");
    free(n);
}

Test(convert_base, test_five)
{
    char *n = convert_base("-FFFF", "0123456789ABCDEF", "01");
    cr_assert_str_eq(n, "-1111111111111111");
    free(n);
}

Test(convert_base, test_six)
{
    char *n = convert_base("-25", "0123456789", "0123456789");
    cr_assert_str_eq(n, "-25");
    free(n);
}

Test(convert_base, test_seven)
{
    char *n = convert_base("", "0123456789", "0123456789");
    cr_assert_eq(n, 0);
    free(n);
}

Test(convert_base, test_eight)
{
    char *n = convert_base("", "", "0123456789");
    cr_assert_eq(n, 0);
}

Test(convert_base, test_nine)
{
    char *n = convert_base("", "0123456789", "");
    cr_assert_eq(n, 0);
}

Test(convert_base, test_ten)
{
    char *n = convert_base("2147483647", "0123456789", "0123456789ABCDEF");
    cr_assert_str_eq(n, "7FFFFFFF");
    free(n);
}

Test(convert_base, test_eleven)
{
    char *n = convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
    cr_assert_str_eq(n, "-80000000");
    free(n);
}

Test(convert_base, test_twelve)
{
    char *n = convert_base("25", "0123456789", "0123456789");
    cr_assert_str_eq(n, "25");
    free(n);
}
