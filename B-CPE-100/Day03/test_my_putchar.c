/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_putchar function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putchar(char c);

Test(my_putchar, test_one, .init = cr_redirect_stdout)
{
    my_putchar('a');

    cr_assert_stdout_eq_str("a");
}

Test(my_putchar, test_two, .init = cr_redirect_stdout)
{
    my_putchar('0');

    cr_assert_stdout_eq_str("0");
}

Test(my_putchar, test_three, .init = cr_redirect_stdout)
{
    my_putchar('\n');

    cr_assert_stdout_eq_str("\n");
}
