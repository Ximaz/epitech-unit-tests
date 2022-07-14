/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the eval_expr function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

int eval_expr(char *string);

Test(eval_expr, test_one)
{
    char *expr = "       42*12";

    cr_assert_eq(eval_expr(expr), 504);
}

Test(eval_expr, test_two)
{
    char *expr = "42/12";

    cr_assert_eq(eval_expr(expr), 3);
}

Test(eval_expr, test_three)
{
    char *expr = "       42/12";

    cr_assert_eq(eval_expr(expr), 3);
}

Test(eval_expr, test_four)
{
    char *expr = "42*12";

    cr_assert_eq(eval_expr(expr), 504);
}

Test(eval_expr, test_five)
{
    char *expr = "45+84-8/4*42+6";

    cr_assert_eq(eval_expr(expr), 51);
}

Test(eval_expr, test_six)
{
    char *expr = "   4 5 +8  4 -8 /4   *42 + 6";

    cr_assert_eq(eval_expr(expr), 51);
}

Test(eval_expr, test_seven)
{
    char *expr = "  ( 4 5 +8  4 -8) /4   *42 + 6";

    cr_assert_eq(eval_expr(expr), 1266);
}

Test(eval_expr, test_eight)
{
    char *expr = " ( ( 4 5 +8  4 -8) /4   *42 + 6) * -1";

    cr_assert_eq(eval_expr(expr), -1266);
}
