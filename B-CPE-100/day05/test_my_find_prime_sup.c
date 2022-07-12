/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_find_prime_sup function.
*/

#include <stdio.h>
#include <criterion/criterion.h>

int my_find_prime_sup(int nb);

Test(my_find_prime_sup, test_one)
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
        cr_assert(my_find_prime_sup(array[i]) == array[i]);
}

Test(my_find_prime_sup, test_two)
{
    cr_assert(my_find_prime_sup(-1) == 2);
}

Test(my_find_prime_sup, test_three)
{
    cr_assert(my_find_prime_sup(0) == 2);
    cr_assert(my_find_prime_sup(1) == 2);
}
