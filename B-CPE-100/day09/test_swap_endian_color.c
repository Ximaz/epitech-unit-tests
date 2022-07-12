/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the swap_endian_color function.
*/

#include <criterion/criterion.h>

int swap_endian_color(int color);

Test(swap_endian_color, test_one)
{
    cr_assert_eq(swap_endian_color(0x06FFFFFF), 0xFFFFFF06);
}

Test(swap_endian_color, test_two)
{
    cr_assert_eq(swap_endian_color(0x0600FFFF), 0xFFFF0006);
}

Test(swap_endian_color, test_three)
{
    cr_assert_eq(swap_endian_color(0x06FF00FF), 0xFF00FF06);
}

Test(swap_endian_color, test_four)
{
    cr_assert_eq(swap_endian_color(0x06FFFF00), 0x00FFFF06);
}

Test(swap_endian_color, test_five)
{
    cr_assert_eq(swap_endian_color(0x060000FF), 0xFF000006);
}

Test(swap_endian_color, test_six)
{
    cr_assert_eq(swap_endian_color(0x0600FF00), 0x00FF0006);
}

Test(swap_endian_color, test_seven)
{
    cr_assert_eq(swap_endian_color(0x06FF0000), 0x0000FF06);
}

Test(swap_endian_color, test_eight)
{
    cr_assert_eq(swap_endian_color(0x06000000), 0x00000006);
}

Test(swap_endian_color, test_nine)
{
    cr_assert_eq(swap_endian_color(0x00FF0006), 0x0600FF00);
}

Test(swap_endian_color, test_ten)
{
    cr_assert_eq(swap_endian_color(0xFF000006), 0x060000FF);
}

Test(swap_endian_color, test_eleven)
{
    cr_assert_eq(swap_endian_color(0x00000006), 0x06000000);
}
