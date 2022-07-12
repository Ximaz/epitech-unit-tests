/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_isnum function.
*/

#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, test_one)
{
    cr_assert(my_str_isnum("HelloWorld") == 0);
}

Test(my_str_isnum, test_two)
{
    cr_assert(my_str_isnum("29093") == 1);
}

Test(my_str_isnum, test_three)
{
    cr_assert(my_str_isnum("[] `?:.EZ;:=C-°°)&]") == 0);
}

Test(my_str_isnum, test_four)
{
    cr_assert(my_str_isnum("") == 1);
}
