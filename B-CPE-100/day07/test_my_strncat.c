/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strncat function.
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, int n);

Test(my_strncat, test_one)
{
    char my_dest[8] = "DEST";
    char dest[8] = "DEST";
    char *src = "SRC";
    cr_assert_str_eq(my_strncat(my_dest, src, 2), strncat(dest, src, 2));
}

Test(my_strncat, test_two)
{
    char my_dest[] = "DEST";
    char dest[] = "DEST";
    char *src = "";
    cr_assert_str_eq(my_strncat(my_dest, src, 10), strncat(dest, src, 10));
}

Test(my_strncat, test_three)
{
    char my_dest[5] = "";
    char dest[5] = "";
    char *src = "ABCD";
    cr_assert_str_eq(my_strncat(my_dest, src, 0), strncat(dest, src, 0));
}

Test(my_strncat, test_four)
{
    char my_dest[1] = "";
    char *src = "";
    cr_assert_str_eq(my_strncat(my_dest, src, -10), my_dest);
}

Test(my_strncat, test_five)
{
    char my_dest[22] = "fezzfezfez";
    char *src = "fezhaifezah";
    cr_assert_str_eq(my_strncat(my_dest, src, 11), my_dest);
}
