/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_sort_word_array function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>

int my_sort_word_array(char **tab);
char **my_str_to_word_array(char const *str);

static void free_array(char **array)
{
    int i = 0;

    while (array[i])
        free(array[i++]);
    free(array);
}

Test(my_sort_word_array, test_one)
{
    char **tab = my_str_to_word_array("./a.out test \"This is a test \" retest");
    my_sort_word_array(tab);
    cr_assert_str_eq(tab[0], "This");
    cr_assert_str_eq(tab[1], "a");
    cr_assert_str_eq(tab[2], "a");
    cr_assert_str_eq(tab[3], "is");
    cr_assert_str_eq(tab[4], "out");
    cr_assert_str_eq(tab[5], "retest");
    cr_assert_str_eq(tab[6], "test");
    cr_assert_str_eq(tab[7], "test");
    free_array(tab);
}
