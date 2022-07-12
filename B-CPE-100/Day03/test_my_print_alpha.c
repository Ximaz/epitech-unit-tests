/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_print_alpha function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_print_alpha(void);

Test(my_print_alpha, test_one, .init = cr_redirect_stdout)
{
    int res = my_print_alpha();

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz");
}
