/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the task01 function.
*/

#include <criterion/criterion.h>

int count_occurences(char const letter, char const *string);

Test(my_add_in_sorted_list, test_one)
{
    char const *string = "Bonjour je suis une phrase ecrite en francais.";

    cr_assert_eq(count_occurences('B', string), 1);
    cr_assert_eq(count_occurences('o', string), 2);
    cr_assert_eq(count_occurences('n', string), 4);
    cr_assert_eq(count_occurences('s', string), 4);
    cr_assert_eq(count_occurences('e', string), 6);
    cr_assert_eq(count_occurences('b', string), 1);
    cr_assert_eq(count_occurences('O', string), 2);
    cr_assert_eq(count_occurences('N', string), 4);
    cr_assert_eq(count_occurences('S', string), 4);
    cr_assert_eq(count_occurences('E', string), 6);
}
