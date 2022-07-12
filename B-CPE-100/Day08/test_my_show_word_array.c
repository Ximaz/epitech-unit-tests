/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_show_word_array function.
*/

#include <string.h>
#include <stdlib.h>
#include <criterion/redirect.h>
#include <criterion/criterion.h>

int my_show_word_array(char *const *tab);

Test(my_show_word_array, test_one, .init = cr_redirect_stdout)
{
    char *test_word_array[] = {"The","Answer","to","the","Great","Question...","Of","Life,","the","Universe","and","Everything...","Is ...","Forty-two,", 0};
    char *expected = "The\nAnswer\nto\nthe\nGreat\nQuestion...\nOf\nLife,\nthe\nUniverse\nand\nEverything...\nIs ...\nForty-two,\n";
    my_show_word_array(test_word_array);
    cr_assert_stdout_eq_str(expected);
}
