/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the get_color function.
*/

#include <criterion/criterion.h>

int get_color(unsigned char red, unsigned char green, unsigned char blue);

Test(get_color, test_one)
{
    cr_assert_eq(get_color(255, 255, 255), 0xFFFFFF);
}

Test(get_color, test_two)
{
    cr_assert_eq(get_color(0, 255, 255), 0x00FFFF);
}

Test(get_color, test_three)
{
    cr_assert_eq(get_color(255, 0, 255), 0xFF00FF);
}

Test(get_color, test_four)
{
    cr_assert_eq(get_color(255, 255, 0), 0xFFFF00);
}

Test(get_color, test_five)
{
    cr_assert_eq(get_color(0, 0, 255), 0x0000FF);
}

Test(get_color, test_six)
{
    cr_assert_eq(get_color(0, 255, 0), 0x00FF00);
}

Test(get_color, test_seven)
{
    cr_assert_eq(get_color(255, 0, 0), 0xFF0000);
}

Test(get_color, test_eight)
{
    cr_assert_eq(get_color(0, 0, 0), 0x000000);
}
