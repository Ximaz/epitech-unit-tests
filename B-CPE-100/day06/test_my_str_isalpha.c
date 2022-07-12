/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_isalpha function.
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, test_one)
{
    cr_assert(my_str_isalpha("HelloWorld") == 1);
}

Test(my_str_isalpha, test_two)
{
    cr_assert(my_str_isalpha("29093") == 0);
}

Test(my_str_isalpha, test_three)
{
    cr_assert(my_str_isalpha("[] `?:.EZ;:=C-°°)&]") == 0);
}

Test(my_str_isalpha, test_four)
{
    cr_assert(my_str_isalpha("") == 1);
}
