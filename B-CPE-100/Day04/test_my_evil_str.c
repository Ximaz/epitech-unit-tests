/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_evil_str function.
*/

#include <stdlib.h>
#include <string.h>
#include <criterion/criterion.h>
char *my_evil_str(char *str);

Test(my_evil_str, test_one)
{
    char *str = "Hello, World !";
    char *writable = strdup(str);
    char *reversed = my_evil_str(writable);
    cr_assert_str_eq(reversed, "! dlroW ,olleH");
    free(writable);
}

Test(my_evil_str, test_two)
{
    char *reversed = my_evil_str("");
    cr_assert_str_eq(reversed, "");
}
