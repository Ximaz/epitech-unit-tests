/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_revstr function.
*/

#include <stdlib.h>
#include <string.h>
#include <criterion/criterion.h>
char *my_revstr(char *str);

Test(my_revstr, test_one)
{
    char *str = "Hello, World !";
    char *writable = strdup(str);
    char *reversed = my_revstr(writable);
    cr_assert_str_eq(reversed, "! dlroW ,olleH");
    free(writable);
}

Test(my_revstr, test_two)
{
    char *reversed = my_revstr("");
    cr_assert_str_eq(reversed, "");
}
