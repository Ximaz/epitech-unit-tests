/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the match function.
*/

#include <criterion/criterion.h>

int match(char const *s1, char const *s2);

Test(match, test_one)
{
    cr_assert(match("test", "test"));
}

Test(match, test_two)
{
    cr_assert(match("Test", "*est"));
}

Test(match, test_three)
{
    cr_assert(match("", ""));
}

Test(match, test_four)
{
    cr_assert(match("test", "********"));
}

Test(match, test_five)
{
    cr_assert(!match("Test", "test"));
    cr_assert(!match("Test", ""));
}

Test(match, test_six)
{
    cr_assert(match("", "********"));
}
