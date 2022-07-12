/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strcat function.
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat, test_one)
{
    char my_dest[8] = "DEST";
    char dest[8] = "DEST";
    char *src = "SRC";
    cr_assert_str_eq(my_strcat(my_dest, src), strcat(dest, src));
}

Test(my_strcat, test_two)
{
    char my_dest[] = "DEST";
    char dest[] = "DEST";
    char *src = "";
    cr_assert_str_eq(my_strcat(my_dest, src), strcat(dest, src));
}

Test(my_strcat, test_three)
{
    char my_dest[5] = "";
    char dest[5] = "";
    char *src = "ABCD";
    cr_assert_str_eq(my_strcat(my_dest, src), strcat(dest, src));
}

Test(my_strcat, test_four)
{
    char my_dest[1] = "";
    char dest[1] = "";
    char *src = "";
    cr_assert_str_eq(my_strcat(my_dest, src), strcat(dest, src));
}

Test(my_strcat, test_five)
{
    char my_dest[22] = "fezzfezfez";
    char *src = "fezhaifezah";
    cr_assert_str_eq(my_strcat(my_dest, src), my_dest);
}
