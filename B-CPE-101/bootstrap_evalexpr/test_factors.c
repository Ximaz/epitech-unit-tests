/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the factors function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdin();
    cr_redirect_stdout();
    cr_redirect_stderr();
}

int factors(char **str_ptr);

Test(factors, test_one)
{
    char *head = "8*8";
    int result = factors(&head);
    cr_assert_eq(result, 64);
}

Test(factors, test_two)
{
    char *head = "-8*8";
    int result = factors(&head);
    cr_assert_eq(result, -64);
}

Test(factors, test_three)
{
    char *head = "8";
    int result = factors(&head);
    cr_assert_eq(result, 8);
}

Test(factors, test_four)
{
    char *head = "-8";
    int result = factors(&head);
    cr_assert_eq(result, -8);
}

Test(factors, test_five)
{
    char *head = "+8";
    int result = factors(&head);
    cr_assert_eq(result, 8);
}

Test(factors, test_six)
{
    char *head = "8/8";
    int result = factors(&head);
    cr_assert_eq(result, 1);
}

Test(factors, test_seven)
{
    char *head = "";
    int result = factors(&head);
    cr_assert_eq(result, 0);
}

Test(factors, test_eight)
{
    char *head = "8*";
    int result = factors(&head);
    cr_assert_eq(result, 0);
}

Test(factors, test_nine, .init = redirect_all_std)
{
    char *head = "8/";
    int result = factors(&head);
    cr_assert_stderr_eq_str("Error : division by zero\n");
    cr_assert_eq(result, 0);
}

Test(factors, test_ten, .init = redirect_all_std)
{
    char *head = "8/8*8/8";
    int result = factors(&head);
    cr_assert_eq(result, 1);
}
