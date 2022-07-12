/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strlen function.
*/

#include <string.h>
#include <criterion/criterion.h>
int my_strlen(char const *str);

Test(my_strlen, test_one)
{
    char const *str = "Hello, World !";
    size_t length = my_strlen(str);
    cr_expect(length == strlen(str));
}

Test(my_strlen, test_two)
{
    char const *str = "";
    size_t length = my_strlen(str);
    cr_expect(length == strlen(str));
}

Test(my_strlen, test_three)
{
    char const str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 127, 0};
    size_t length = my_strlen(str);
    cr_expect(length == strlen(str));
}

Test(my_strlen, test_four)
{
    char const str[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 127, 0};
    size_t length = my_strlen(str);
    cr_expect(length == strlen(str));
}
