/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_compute_power_rec function.
*/

#include <criterion/criterion.h>

int my_compute_power_rec(int nb, int p);

Test(my_compute_power_rec, test_one)
{
    cr_assert(my_compute_power_rec(5, 0) == 1);
    cr_assert(my_compute_power_rec(-5, 0) == 1);
    cr_assert(my_compute_power_rec(0, 0) == 1);
}

Test(my_compute_power_rec, test_two)
{
    cr_assert(my_compute_power_rec(5, -2) == 0);
    cr_assert(my_compute_power_rec(-5, -2) == 0);
    cr_assert(my_compute_power_rec(0, -2) == 0);
}
