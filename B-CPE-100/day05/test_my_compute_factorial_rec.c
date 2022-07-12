/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_compute_factorial_rec function.
*/

#include <criterion/criterion.h>

int my_compute_factorial_rec(int nb);

Test(my_compute_factorial_rec, test_one)
{
    cr_assert(my_compute_factorial_rec(5) == 120);
}

Test(my_compute_factorial_rec, test_two)
{
    cr_assert(my_compute_factorial_rec(0) == 1);
    cr_assert(my_compute_factorial_rec(1) == 1);
}

Test(my_compute_factorial_rec, test_three)
{
    cr_assert(my_compute_factorial_rec(-1) == 0);
}

Test(my_compute_factorial_rec, test_four)
{
    cr_assert(my_compute_factorial_rec(12) == 479001600);
}

Test(my_compute_factorial_rec, test_five)
{
    cr_assert(my_compute_factorial_rec(13) == 0);
}
