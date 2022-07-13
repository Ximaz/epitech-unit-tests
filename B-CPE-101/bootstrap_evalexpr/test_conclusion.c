/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the conclusion function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int conclusion(char **str_ptr);

Test(conclusion, test_one)
{
    char *head = "8*8-578*-5287-2*857+2*7-452";
    int result = conclusion(&head);
    cr_assert_eq(result, 3053798);
}

Test(conclusion, test_two)
{
    char *head = "8*";
    int result = conclusion(&head);
    cr_assert_eq(result, 0);
}

Test(conclusion, test_three)
{
    char *head = "";
    int result = conclusion(&head);
    cr_assert_eq(result, 0);
}

Test(conclusion, test_four)
{
    char *head = "-0";
    int result = conclusion(&head);
    cr_assert_eq(result, 0);
}

/**
 * for ()
 *  if()
 * for () {
 * }
 */