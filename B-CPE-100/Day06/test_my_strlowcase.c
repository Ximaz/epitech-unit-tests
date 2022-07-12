/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strlowcase function.
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, test_one)
{
    char string[] = "Hello World";
    char *s = strdup(string);
    char *lowcase = my_strlowcase(s);
    cr_assert_str_eq(lowcase, "hello world");
    free(s);
}

Test(my_strlowcase, test_two)
{
    char string[] = "0459.--+9fezfFEAf%°";
    char *s = strdup(string);
    char *lowcase = my_strlowcase(s);
    cr_assert_str_eq(lowcase, "0459.--+9fezffeaf%°");
    free(s);
}

Test(my_strlowcase, test_three)
{
    char string[] = "";
    char *s = strdup(string);
    char *lowcase = my_strlowcase(s);
    cr_assert_str_eq(lowcase, "");
    free(s);
}
