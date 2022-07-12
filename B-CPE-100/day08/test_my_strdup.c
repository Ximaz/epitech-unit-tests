/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strdup function.
*/

#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>

char *my_strdup(char const *src);

Test(my_strdup, test_one)
{
    char const *src = "Bonjour le monde !";
    char *my_copy = my_strdup(src);
    char *copy = strdup(src);
    cr_assert_str_eq(my_copy, copy);
    free(my_copy);
    free(copy);
}

Test(my_strdup, test_two)
{
    char const *src = "";
    char *my_copy = my_strdup(src);
    char *copy = strdup(src);
    cr_assert_str_eq(my_copy, copy);
    free(my_copy);
    free(copy);
}
