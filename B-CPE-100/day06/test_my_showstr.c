/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_showstr function.
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>

int my_showstr(char const *str);

Test(my_showstr, test_one, .init = cr_redirect_stdout)
{
    my_showstr("I like \n ponies!");
    cr_assert_stdout_eq_str("I like \\0a ponies!");
}

Test(my_showstr, test_two, .init = cr_redirect_stdout)
{
    my_showstr("\1\2\3\4\5\6\7!");
    cr_assert_stdout_eq_str("\\01\\02\\03\\04\\05\\06\\07!");
}
