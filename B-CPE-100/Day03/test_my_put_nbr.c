/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz, Adam Brutsaert
** File description :
** Unit tests to test the my_put_nbr function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_nbr(int n);

Test(my_put_nbr, negative_value, .init = cr_redirect_stdout)
{
    my_put_nbr(-1);
    cr_assert_stdout_eq_str("-1");
}

Test(my_put_nbr, null_value, .init = cr_redirect_stdout)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, positive_value, .init = cr_redirect_stdout)
{
    my_put_nbr(1);
    cr_assert_stdout_eq_str("1");
}

Test(my_put_nbr, minimum_value, .init = cr_redirect_stdout)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_put_nbr, maximum_value, .init = cr_redirect_stdout)
{
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}
