/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_print_revalpha function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_print_revalpha(void);

Test(my_print_revalpha, test_one, .init = cr_redirect_stdout)
{
    int res = my_print_revalpha();

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("zyxwvutsrqponmlkjihgfedcba");
}
