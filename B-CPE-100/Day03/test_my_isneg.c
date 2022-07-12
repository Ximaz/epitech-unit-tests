/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_isneg function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_isneg(int n);

Test(my_isneg, test_one, .init = cr_redirect_stdout)
{
    my_isneg(-1);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, test_two, .init = cr_redirect_stdout)
{
    my_isneg(-2147483648);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, test_three, .init = cr_redirect_stdout)
{
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, test_four, .init = cr_redirect_stdout)
{
    my_isneg(2147483647);
    cr_assert_stdout_eq_str("P");
}
