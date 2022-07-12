/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_putnbr_base function.
*/

#include <limits.h>
#include <criterion/redirect.h>
#include <criterion/criterion.h>

int my_putnbr_base(int nbr, char const *base);

Test(my_putnbr_base, test_one, .init = cr_redirect_stdout)
{
    my_putnbr_base(25, "0123456789ABCDEF");
    my_putnbr_base(-25, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("19-19");
}

Test(my_putnbr_base, test_two, .init = cr_redirect_stdout)
{
    my_putnbr_base(25, "01");
    my_putnbr_base(-25, "01");
    cr_assert_stdout_eq_str("11001-11001");
}

Test(my_putnbr_base, test_three, .init = cr_redirect_stdout)
{
    my_putnbr_base(25, "0123456789");
    my_putnbr_base(-25, "0123456789");
    cr_assert_stdout_eq_str("25-25");
}

Test(my_putnbr_base, test_four, .init = cr_redirect_stdout)
{
    my_putnbr_base(25, "");
    my_putnbr_base(-25, "");
    cr_assert_stdout_eq_str("");
}

Test(my_putnbr_base, test_five, .init = cr_redirect_stdout)
{
    my_putnbr_base(INT_MAX, "0123456789");
    my_putnbr_base(INT_MIN, "0123456789");
    cr_assert_stdout_eq_str("2147483647-2147483648");
}
