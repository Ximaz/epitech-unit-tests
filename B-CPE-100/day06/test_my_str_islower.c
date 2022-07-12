/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_islower function.
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, test_one)
{
    cr_assert(my_str_islower("HelloWorld") == 0);
}

Test(my_str_islower, test_two)
{
    cr_assert(my_str_islower("helloworld") == 1);
}

Test(my_str_islower, test_three)
{
    cr_assert(my_str_islower("29093") == 0);
}

Test(my_str_islower, test_four)
{
    cr_assert(my_str_islower("[] `?:.EZ;:=C-°°)&]") == 0);

}

Test(my_str_islower, test_five)
{
    cr_expect(my_str_islower("") == 1);
}
