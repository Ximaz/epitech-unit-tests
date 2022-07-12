/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz, Adam Brutsaert
** File description :
** Unit tests to test the my_isneg function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_isneg(int n);

Test(my_isneg, negative_value, .init = cr_redirect_stdout)
{
    my_isneg(-1);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, null_value, .init = cr_redirect_stdout)
{
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, positive_value, .init = cr_redirect_stdout)
{
    my_isneg(1);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, minimum_value, .init = cr_redirect_stdout)
{
    my_isneg(-2147483648);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, maximum_value, .init = cr_redirect_stdout)
{
    my_isneg(2147483647);
    cr_assert_stdout_eq_str("P");
}
