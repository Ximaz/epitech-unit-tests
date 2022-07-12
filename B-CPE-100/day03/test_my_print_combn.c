/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz, Adam Brutsaert
** File description :
** Unit tests to test the my_print_combn function.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_print_combn(int n);

Test(my_print_combn, correct_return_value_and_output_for_1, .init = cr_redirect_stdout)
{
    int res = my_print_combn(1);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
}

Test(my_print_combn, correct_return_value_and_output_for_2, .init = cr_redirect_stdout)
{
    int res = my_print_combn(2);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89");
}

Test(my_print_combn, correct_return_value_and_output_for_3, .init = cr_redirect_stdout)
{
    int res = my_print_combn(3);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789");
}
