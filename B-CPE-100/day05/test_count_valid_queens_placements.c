/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the count_valid_queens_placements function.
*/

#include <criterion/criterion.h>
int count_valid_queens_placements(int nb);

Test(count_valid_queens_placements, test_one)
{
    cr_assert(count_valid_queens_placements(1) == 1);
    cr_assert(count_valid_queens_placements(2) == 0);
    cr_assert(count_valid_queens_placements(3) == 0);
    cr_assert(count_valid_queens_placements(4) == 2);
    cr_assert(count_valid_queens_placements(5) == 10);
    cr_assert(count_valid_queens_placements(6) == 4);
    cr_assert(count_valid_queens_placements(7) == 40);
    cr_assert(count_valid_queens_placements(8) == 92);
    cr_assert(count_valid_queens_placements(9) == 352);
    cr_assert(count_valid_queens_placements(10) == 724);
    cr_assert(count_valid_queens_placements(11) == 2680);
    cr_assert(count_valid_queens_placements(12) == 14200);
    cr_assert(count_valid_queens_placements(13) == 73712);
}
