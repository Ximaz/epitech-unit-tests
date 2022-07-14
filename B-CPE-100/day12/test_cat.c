/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the cat function.
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int read_stdin(void);
int read_files(int argc, char **argv);

void redirect_all_std(void)
{
    cr_redirect_stdin();
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(read_files, test_one, .init = redirect_all_std)
{
    int err = 0;
    int file_numbers = 1;
    char *filenames[] = { "test.txt" };
    err = read_files(file_numbers, filenames);
    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str("This is a test used by Criterion !\n");
}

Test(read_files, test_two, .init = redirect_all_std)
{
    int file_numbers = 2;
    char *filenames[] = { "", "test.txt" };
    int err = read_files(file_numbers, filenames);

    cr_assert_eq(err, 1);
    cr_assert_stderr_eq_str("cat: '': No such file or directory\n");
    cr_assert_stdout_eq_str("This is a test used by Criterion !\n");
}

Test(read_stdin, test_three, .init = redirect_all_std)
{
    int err = 0;
    FILE *f_stdin = cr_get_redirected_stdin();

    fprintf(f_stdin, "the quick brown fox jumps over the lazy dog");
    fclose(f_stdin);
    err = read_stdin();
    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str("the quick brown fox jumps over the lazy dog");
}

Test(read_stdin, test_four, .init = redirect_all_std)
{
    int err = 0;
    char data[] = {-1};
    FILE *f_stdin = cr_get_redirected_stdin();

    fprintf(f_stdin, data);
    fclose(f_stdin);
    err = read_stdin();
    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str(data);
}
