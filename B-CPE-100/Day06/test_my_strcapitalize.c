/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_strcapitalize function.
*/

#include <string.h>
#include <criterion/criterion.h>
char *my_strcapitalize(char *str);

Test(my_strcapitalize, test_one)
{
    char string[] = "Hello World";
    char *s = strdup(string);
    char *capitalized = my_strcapitalize(s);

    cr_assert_str_eq(capitalized, "Hello World");
    free(s);
}

Test(my_strcapitalize, test_two)
{
    char string[] = "hello world";
    char *s = strdup(string);
    char *capitalized = my_strcapitalize(s);

    cr_assert_str_eq(capitalized, "Hello World");
    free(s);
}

Test(my_strcapitalize, test_three)
{
    char string[] = "";
    char *s = strdup(string);
    char *capitalized = my_strcapitalize(s);

    cr_assert_str_eq(capitalized, "");
    free(s);
}

Test(my_strcapitalize, test_four)
{
    char string[] = "hello world 489 **fa ++/8*-";
    char *s = strdup(string);
    char *capitalized = my_strcapitalize(s);

    cr_assert_str_eq(capitalized, "Hello World 489 **Fa ++/8*-");
    free(s);
}

Test(my_strcapitalize, test_five)
{
    char string[] = "hey, how are you? 42WORds forty-two; fifty+one";
    char *s = strdup(string);
    char *capitalized = my_strcapitalize(s);

    cr_assert_str_eq(capitalized, "Hey, How Are You? 42words Forty-Two; Fifty+One");
    free(s);
}
