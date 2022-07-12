/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_getnbr function.
*/

#include <stdio.h>
#include <criterion/criterion.h>

int my_getnbr(char const *str);

Test(my_getnbr, test_one)
{
    char const *str = "+---+--++---+---+---+-42";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == -42);
}

Test(my_getnbr, test_two)
{
    char const *str = "-33-37";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == -33);
}

Test(my_getnbr, test_three)
{
    char const *str = "a45";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == 0);
}

Test(my_getnbr, test_four)
{
    char const *str = "42a43";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == 42);
}

Test(my_getnbr, test_five)
{
    char const *str = "11000000000000000000000042";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == 0);
}

Test(my_getnbr, test_six)
{
    char const *str = "-1000000000000000000000042";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == 0);
}

Test(my_getnbr, test_seven)
{
    char const *str = "-2147483648";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == -2147483648);
}

Test(my_getnbr, test_eight)
{
    char const *str = "2147483647";
    int my_nb = my_getnbr(str);
    cr_expect(my_nb == 2147483647);
}
