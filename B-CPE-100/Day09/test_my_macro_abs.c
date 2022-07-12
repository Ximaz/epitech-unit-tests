/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_macro_abs function.
*/

#include "../include/my_macro_abs.h"
#include "../include/my_macro_abs.h"
#include <criterion/criterion.h>

Test(ABS, test_one)
{
    cr_assert_eq(ABS(0 - 1), 1);
}

Test(ABS, test_two)
{
    cr_assert_eq(ABS(1), 1);
}

Test(ABS, test_three)
{
    cr_assert_eq(ABS(0), 0);
}
