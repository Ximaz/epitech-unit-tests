/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_compute_factorial_it function.
*/

#include <criterion/criterion.h>

int my_compute_factorial_it(int nb);

Test(my_compute_factorial_it, test_one)
{
    cr_assert(my_compute_factorial_it(5) == 120);
}

Test(my_compute_factorial_it, test_two)
{
    cr_assert(my_compute_factorial_it(0) == 1);
    cr_assert(my_compute_factorial_it(1) == 1);
}

Test(my_compute_factorial_it, test_three)
{
    cr_assert(my_compute_factorial_it(-1) == 0);
}

Test(my_compute_factorial_it, test_four)
{
    cr_assert(my_compute_factorial_it(12) == 479001600);
}

Test(my_compute_factorial_it, test_five)
{
    cr_assert(my_compute_factorial_it(13) == 0);
}
