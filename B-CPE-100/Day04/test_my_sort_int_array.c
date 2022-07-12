/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the my_sort_int_array function.
*/

#include <stdlib.h>
#include <criterion/criterion.h>
void my_sort_int_array(int *array, int size);

static int is_array_sorted(int arr[], int n)
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return is_array_sorted(arr, n - 1);
}

Test(my_sort_int_array, test_one)
{
    int size = 7;
    int array[] = {-9, 5, 3, -10, 55, 13, 0};
    cr_assert(!is_array_sorted(array, size));
    my_sort_int_array(array, size);
    cr_assert(is_array_sorted(array, size));
}

Test(my_sort_int_array, test_two)
{
    int size = 0;
    int *array = {0};
    my_sort_int_array(array, size);
    cr_assert(is_array_sorted(array, size));
}

Test(my_sort_int_array, test_three)
{
    int size = 1;
    int *array = {0};
    my_sort_int_array(array, size);
    cr_assert(is_array_sorted(array, size));
}

Test(my_sort_int_array, test_five)
{
    int size = -1;
    int array[] = {-5, 10, 5, 3};
    my_sort_int_array(array, size);
    cr_assert(!is_array_sorted(array, size));
}

Test(my_sort_int_array, test_six)
{
    int size = 7;
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    cr_assert(is_array_sorted(array, size));
    my_sort_int_array(array, size);
    cr_assert(is_array_sorted(array, size));
}
