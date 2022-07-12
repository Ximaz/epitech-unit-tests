/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_str_to_word_array function.
*/

#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>

char **my_str_to_word_array(char const str[]);

static void free_array(char **array)
{
    int i = 0;

    while (array[i])
        free(array[i++]);
    free(array);
}

Test(my_str_to_word_array, test_one)
{
    char const str[] = "Bonjour le monde !";
    char **tab = my_str_to_word_array(str);
    cr_assert_str_eq(tab[0], "Bonjour");
    cr_assert_str_eq(tab[1], "le");
    cr_assert_str_eq(tab[2], "monde");
    cr_assert(tab[3] == 0);
    free_array(tab);
}

Test(my_str_to_word_array, test_two)
{
    char const str[] = "        ";
    char **tab = my_str_to_word_array(str);
    cr_assert(tab[0] == 0);
    free_array(tab);
}

Test(my_str_to_word_array, test_three)
{
    char const str[] = "Bonjour le monde !  feza";
    char **tab = my_str_to_word_array(str);
    cr_assert_str_eq(tab[0], "Bonjour");
    cr_assert_str_eq(tab[1], "le");
    cr_assert_str_eq(tab[2], "monde");
    cr_assert_str_eq(tab[3], "feza");
    cr_assert(tab[4] == 0);
    free_array(tab);
}

Test(my_str_to_word_array, test_four)
{
    char const str[] = "";
    char **tab = my_str_to_word_array(str);
    cr_assert(tab[0] == 0);
    free(tab);
}

Test(my_str_to_word_array, test_five)
{
    char const str[] = " ";
    char **tab = my_str_to_word_array(str);
    cr_assert(tab[0] == 0);
    free_array(tab);
}
