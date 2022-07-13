/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the summands function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>

int summands(char **str_ptr);

Test(summands, test_one)
{
    char *head = "8+8";
    int result = summands(&head);
    cr_assert_eq(result, 16);
}

Test(summands, test_two)
{
    char *head = "-8+8";
    int result = summands(&head);
    cr_assert_eq(result, 0);
}

Test(summands, test_three)
{
    char *head = "8";
    int result = summands(&head);
    cr_assert_eq(result, 8);
}

Test(summands, test_four)
{
    char *head = "-8";
    int result = summands(&head);
    cr_assert_eq(result, -8);
}

Test(summands, test_five)
{
    char *head = "+8";
    int result = summands(&head);
    cr_assert_eq(result, 8);
}

Test(summands, test_six)
{
    char *head = "-8-8";
    int result = summands(&head);
    cr_assert_eq(result, -16);
}

Test(summands, test_seven)
{
    char *head = "";
    int result = summands(&head);
    cr_assert_eq(result, 0);
}

Test(summands, test_eight)
{
    char *head = "8+";
    int result = summands(&head);
    cr_assert_eq(result, 8);
}

Test(summands, test_nine)
{
    char *head = "8+8-8-8";
    int result = summands(&head);
    cr_assert_eq(result, 0);
}
