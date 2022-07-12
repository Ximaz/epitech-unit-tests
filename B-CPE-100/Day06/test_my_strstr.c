/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strstr function.
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, test_one)
{
    cr_assert_str_eq(my_strstr("HelloWorld", "World"), strstr("HelloWorld", "World"));
}

Test(my_strstr, test_two)
{
    cr_assert_str_eq(my_strstr("", ""), strstr("", ""));
}

Test(my_strstr, test_three)
{
    cr_assert_eq(my_strstr("J*k", "PP"), strstr("J*k", "PP"));
}
