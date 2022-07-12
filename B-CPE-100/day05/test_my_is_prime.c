/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_is_prime function.
*/

#include <criterion/criterion.h>

int my_is_prime(int nb);

Test(my_is_prime, test_one)
{
    int array[] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47,
        53,
        59,
        61,
        67,
        71,
        73,
        79,
        83,
        89,
        97,
        101,
        103,
        107,
        109,
        113,
        127,
        131,
        137,
        139,
        149,
        151,
        157,
        163,
        167,
        173,
        179,
        181,
        191,
        193,
        197,
        199
    };

    for (int i = 0; i < 46; i++)
        cr_assert(my_is_prime(array[i]) == 1);
}

Test(my_is_prime, test_two)
{
    cr_assert(my_is_prime(-1) == 0);
}

Test(my_is_prime, test_three)
{
    cr_assert(my_is_prime(0) == 0);
    cr_assert(my_is_prime(1) == 0);
}
