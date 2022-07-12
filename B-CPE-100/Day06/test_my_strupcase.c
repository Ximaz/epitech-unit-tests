/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strupcase function.
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, test_one)
{
    char string[] = "Hello World";
    char *s = strdup(string);
    char *upcase = my_strupcase(s);
    cr_assert_str_eq(upcase, "HELLO WORLD");
    free(s);
}

Test(my_strupcase, test_two)
{
    char string[] = "0459.--+9fezfFEAf%°";
    char *s = strdup(string);
    char *upcase = my_strupcase(s);
    cr_assert_str_eq(upcase, "0459.--+9FEZFFEAF%°");
    free(s);
}

Test(my_strupcase, test_three)
{
    char string[] = "";
    char *s = strdup(string);
    char *upcase = my_strupcase(s);
    cr_assert_str_eq(upcase, "");
    free(s);
}
