/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_put_nbr function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_nbr(int n);

Test(my_put_nbr, test_one, .init = cr_redirect_stdout)
{
    my_put_nbr(-1);
    cr_assert_stdout_eq_str("-1");
}

Test(my_put_nbr, test_two, .init = cr_redirect_stdout)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, test_three, .init = cr_redirect_stdout)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_put_nbr, test_four, .init = cr_redirect_stdout)
{
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_put_nbr, test_five, .init = cr_redirect_stdout)
{
    my_put_nbr(-2147483647);
    cr_assert_stdout_eq_str("-2147483647");
}
