/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the nmatch function.
*/

#include <criterion/criterion.h>

int nmatch(char const *s1, char const *s2);

Test(nmatch, test_one)
{
    cr_assert_eq(nmatch("test", "test"), 1);
}

Test(nmatch, test_two)
{
    cr_assert_eq(nmatch("Test", "*est"), 1);
}

Test(nmatch, test_three)
{
    cr_assert_eq(nmatch("", ""), 1);
}

Test(nmatch, test_four)
{
    cr_assert_eq(nmatch("test", "*t*"), 2);
}

Test(nmatch, test_five)
{
    cr_assert_not(nmatch("Test", ""));
    cr_assert_not(nmatch("Test", "test"));
}

Test(nmatch, test_six)
{
    cr_assert_eq(nmatch("", "********"), 1);
}

Test(nmatch, test_seven)
{
    cr_assert_eq(nmatch("test", "*********"), 495);
}
