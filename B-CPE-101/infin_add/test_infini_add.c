/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the infini_add function.
*/
#include <stdlib.h>
#include <criterion/criterion.h>

char *infin_add(char *s1, char *s2);

Test(infin_add, test_one)
{
    char s1[] = "435439435845843984358439";
    char s2[] = "45359766785665822182412343254343435433337459569";
    char *result = infin_add(s1, s2);

    cr_assert_str_eq(result, "45359766785665822182412778693779281277321818008");
    if (result)
        free(result);
}

Test(infin_add, test_two)
{
    char s1[] = "37";
    char s2[] = "1300";
    char *result = infin_add(s1, s2);

    cr_assert_str_eq(result, "1337");
    if (result)
        free(result);
}

Test(infin_add, test_three)
{
    char s1[] = "1300";
    char s2[] = "37";
    char *result = infin_add(s1, s2);

    cr_assert_str_eq(result, "1337");
    if (result)
        free(result);
}
