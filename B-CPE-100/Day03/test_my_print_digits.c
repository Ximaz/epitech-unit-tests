/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_print_digits function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_print_digits(void);

Test(my_print_digits, test_one, .init = cr_redirect_stdout)
{
    int res = my_print_digits();

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("0123456789");
}
