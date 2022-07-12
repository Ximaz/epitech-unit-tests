/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_swap function.
*/

#include <criterion/criterion.h>
void my_swap(int *a, int *b);

Test(my_swap, test_one)
{
    int a = 10;
    int b = 20;
    my_swap(&a, &b);
    cr_expect_eq(a, 20);
    cr_expect_eq(b, 10);
}

Test(my_swap, test_two)
{
    int a = -20;
    int b = 0;
    my_swap(&a, &b);
    cr_expect_eq(a, 0);
    cr_expect_eq(b, -20);
}

Test(my_swap, test_three)
{
    int a = 0;
    int b = 0;
    my_swap(&a, &b);
    cr_expect_eq(a, 0);
    cr_expect_eq(b, 0);
}

Test(my_swap, test_four)
{
    int a = 10;
    int b = 0;
    my_swap(&a, &a);
    cr_expect_eq(a, 10);
    cr_expect_eq(b, 0);
}

Test(my_swap, test_five)
{
    int a = 0;
    int b = 10;
    my_swap(&b, &b);
    cr_expect_eq(a, 0);
    cr_expect_eq(b, 10);
}
