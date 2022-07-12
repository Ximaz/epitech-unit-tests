/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_compute_square_root function.
*/

#include <criterion/criterion.h>

int my_compute_square_root(int nb);

Test(my_compute_square_root, test_one)
{
    cr_assert(my_compute_square_root(5) == 0);
    cr_assert(my_compute_square_root(-5) == 0);
    cr_assert(my_compute_square_root(9) == 3);
}
