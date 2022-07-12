/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz, Adam Brutsaert
** File description :
** Unit tests to test the my_putchar function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putchar(char c);

Test(my_putchar, alphabetical_character, .init = cr_redirect_stdout)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_putchar, numerical_character, .init = cr_redirect_stdout)
{
    my_putchar('0');
    cr_assert_stdout_eq_str("0");
}

Test(my_putchar, special_character, .init = cr_redirect_stdout)
{
    my_putchar('\n');
    cr_assert_stdout_eq_str("\n");
}
