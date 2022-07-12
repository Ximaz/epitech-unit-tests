/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_compute_power_it function.
*/

#include <criterion/criterion.h>

int my_compute_power_it(int nb, int p);

Test(my_compute_power_it, test_one)
{
    cr_assert(my_compute_power_it(5, 0) == 1);
    cr_assert(my_compute_power_it(-5, 0) == 1);
    cr_assert(my_compute_power_it(0, 0) == 1);
}

Test(my_compute_power_it, test_two)
{
    cr_assert(my_compute_power_it(5, -2) == 0);
    cr_assert(my_compute_power_it(-5, -2) == 0);
    cr_assert(my_compute_power_it(0, -2) == 0);
}
