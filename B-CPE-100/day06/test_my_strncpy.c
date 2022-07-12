/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strncpy function.
*/

#include <string.h>
#include <criterion/criterion.h>

int my_strncpy(char *dest, char const *src, int n);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstringop-truncation"

Test(my_strncpy, test_one)
{
    char dest[6];
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, test_two)
{
    char my_dest[1];
    char dest[1];
    my_strncpy(my_dest, "", 0);
    strncpy(dest, "", 0);
    cr_assert_arr_eq(my_dest, dest, 0);
}

Test(my_strncpy, test_three)
{
    char my_dest[11];
    char dest[11];
    my_strncpy(my_dest, "HelloWorld", 10);
    strncpy(dest, "HelloWorld", 10);
    cr_assert_arr_eq(my_dest, dest, 10);
}

Test(my_strncpy, test_four)
{
    char my_dest[11];
    char dest[11];
    my_strncpy(my_dest, "HelloWorld", 11);
    strncpy(dest, "HelloWorld", 11);
    cr_assert_arr_eq(my_dest, dest, 11);
}

Test(my_strncpy, test_five)
{
    char my_dest[6];
    char dest[6];
    my_strncpy(my_dest, "HelloWorld", 5);
    strncpy(dest, "HelloWorld", 5);
    cr_assert_arr_eq(my_dest, dest, 5);
}

Test(my_strncpy, test_six)
{
    char my_dest[1];
    char dest[1];
    my_strncpy(my_dest, "HelloWorld", 0);
    strncpy(dest, "HelloWorld", 0);
    cr_assert_arr_eq(my_dest, dest, 0);
}

Test(my_strncpy, test_seven)
{
    char my_dest[10];
    char dest[10];
    my_strncpy(my_dest, "HelloWorld", 10);
    strncpy(dest, "HelloWorld", 10);
    cr_assert_arr_eq(my_dest, dest, 10);
}

Test(my_strncpy, test_eight)
{
    char my_dest[50];
    char dest[50];
    my_strncpy(my_dest, "HelloWorld", 50);
    strncpy(dest, "HelloWorld", 50);
    cr_assert_arr_eq(my_dest, dest, 50);
}

#pragma GCC diagnostic pop
