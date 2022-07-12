/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strcpy function.
*/

#include <stdlib.h>
#include <string.h>
#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, test_one)
{
    char const *src = "Hello World";
    char my_dest[12];
    char dest[12];
    my_strcpy(my_dest, src);
    strcpy(dest, src);
    cr_assert_str_eq(my_dest, src);
    cr_assert_str_eq(dest, src);
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_two)
{
    char const *src = "";
    char dest[] = {0};
    my_strcpy(dest, src);
    cr_assert_str_eq(dest, src);
}

Test(my_strcpy, test_three)
{
    char const src[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 127, 0};
    char my_dest[12];
    char dest[12];
    my_strcpy(my_dest, src);
    strcpy(dest, src);
    cr_assert_str_eq(my_dest, src);
    cr_assert_str_eq(dest, src);
    cr_assert_str_eq(my_dest, dest);
}
