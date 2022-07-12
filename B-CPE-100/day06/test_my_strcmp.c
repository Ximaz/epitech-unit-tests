/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strcmp function.
*/

#include <string.h>
#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, test_one)
{
    char *s1 = "HelloWorld";
    char *s2 = "HelloWorld";
    cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
}

Test(my_strcmp, test_two)
{
    char *s1 = "ab";
    char *s2 = "ba";
    cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
}

Test(my_strcmp, test_three)
{
    char *s1 = "ba";
    char *s2 = "ab";
    cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
}

Test(my_strcmp, test_four)
{
    char *s1 = "";
    char *s2 = "";
    cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
}

Test(my_strcmp, test_five)
{
    char *s1 = "abcdef";
    char *s2 = "abc";
    cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
}
