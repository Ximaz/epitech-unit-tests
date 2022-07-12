/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_getnbr_base function.
*/

#include <criterion/criterion.h>

int my_getnbr_base(char const *str, char const *base);

Test(my_getnbr_base, test_one)
{
    cr_assert(my_getnbr_base("19", "0123456789ABCDEF") == 25);
    cr_assert(my_getnbr_base("-19", "0123456789ABCDEF") == -25);
}

Test(my_getnbr_base, test_two)
{
    cr_assert(my_getnbr_base("11001", "01") == 25);
    cr_assert(my_getnbr_base("-11001", "01") == -25);
}

Test(my_getnbr_base, test_three)
{
    cr_assert(my_getnbr_base("25", "0123456789") == 25);
    cr_assert(my_getnbr_base("-25", "0123456789") == -25);
}

Test(my_getnbr_base, test_four)
{
    cr_assert(my_getnbr_base("25", "") == 0);
    cr_assert(my_getnbr_base("-25", "") == 0);
}

Test(my_getnbr_base, test_five)
{
    cr_assert(my_getnbr_base("---+-+-+-+++--25", "0123456789") == 25);
    cr_assert(my_getnbr_base("-+-+---+--+-+-25", "0123456789") == -25);
}

Test(my_getnbr_base, test_six)
{
    cr_assert(my_getnbr_base("FFB0", "01") == 0);
}

Test(my_getnbr_base, test_seven)
{
    cr_assert(my_getnbr_base("7FFFFFFF", "0123456789ABCDEF") == 2147483647);
    cr_assert(my_getnbr_base("-80000000", "0123456789ABCDEF") == -2147483648);
}
