/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_isupper function.
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, test_one)
{
    cr_assert(my_str_isupper("HelloWorld") == 0);
}

Test(my_str_isupper, test_two)
{
    cr_assert(my_str_isupper("HELLOWORLD") == 1);
}

Test(my_str_isupper, test_three)
{
    cr_assert(my_str_isupper("29093") == 0);
}

Test(my_str_isupper, test_four)
{
    cr_assert(my_str_isupper("[] `?:.EZ;:=C-°°)&]") == 0);

}

Test(my_str_isupper, test_five)
{
    cr_expect(my_str_isupper("") == 1);
}
