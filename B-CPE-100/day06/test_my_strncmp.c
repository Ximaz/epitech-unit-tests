/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strncmp function.
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test_one)
{
    char *s1 = "HelloWorld";
    char *s2 = "HelloWorld";
    cr_assert(my_strncmp(s1, s2, 10) == strncmp(s1, s2, 10));
}

Test(my_strncmp, test_two)
{
    char *s1 = "ab";
    char *s2 = "ba";
    cr_assert(my_strncmp(s1, s2, 1) == strncmp(s1, s2, 1));
    cr_assert(my_strncmp(s2, s1, 1) == strncmp(s2, s1, 1));
}

Test(my_strncmp, test_three)
{
    char *s1 = "";
    char *s2 = "";
    cr_assert(my_strncmp(s1, s2, 1) == strncmp(s1, s2, 1));
}

Test(my_strncmp, test_four)
{
    char *s1 = "abcdef";
    char *s2 = "abc";
    cr_assert(my_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
}
