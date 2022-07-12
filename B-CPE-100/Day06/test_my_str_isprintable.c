/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_isprintable function.
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, test_one)
{
    cr_assert(my_str_isprintable("HelloWorld") == 1);
}

Test(my_str_isprintable, test_two)
{
    cr_assert(my_str_isprintable("29093") == 1);
}

Test(my_str_isprintable, test_three)
{
    cr_assert(my_str_isprintable("ABDEF") == 1);
}

Test(my_str_isprintable, test_four)
{
    cr_assert(my_str_isprintable("") == 1);
}

Test(my_str_isprintable, test_five)
{
    char const str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    cr_assert(my_str_isprintable(str) == 0);
}
