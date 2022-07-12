/*
** EPITECH UNIT TESTS, 2022
** Authors : Ximaz
** File description :
** Unit tests to test the grep function.
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/grep.h"
#include "../include/util.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdin();
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(search_match, test_one, .init = redirect_all_std)
{
    pattern_t *p = parse_patterns("phrase\n1");
    char buffer[] = "1\nCeci est une phrase\n1\n";

    cr_assert_eq(p->number, 2);
    cr_assert_str_eq(p->patterns[0], "phrase");
    cr_assert_str_eq(p->patterns[1], "1");
    cr_assert_eq(search_match(buffer, p), 1);
    destroy_patterns(p);
}

Test(my_grep, test_two, .init = redirect_all_std)
{
    pattern_t *p = parse_patterns("phrase\n1");
    char *filenames[] = {"f1.txt", "f2.txt"};
    int err = my_grep(2, filenames, p);

    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str("f1.txt:1\nf1.txt:Ceci est une phrase.\nf1.txt:1\nf2.txt:1\nf2.txt:Ceci est une autre phrase.\nf2.txt:1\n");
    destroy_patterns(p);
}

Test(read_stdin, test_three, .init = redirect_all_std)
{
    pattern_t *p = parse_patterns("phrase\n1");
    char data[] = "Ceci est une phrase";
    int err = 0;

    FILE *f_stdin = cr_get_redirected_stdin();

    fprintf(f_stdin, data);
    fclose(f_stdin);
    err = read_stdin(p);
    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str(data);
    destroy_patterns(p);
}

Test(read_stdin, test_four, .init = redirect_all_std)
{
    pattern_t *p = parse_patterns("phrase\n1");
    char data[] = "1";
    int err = 0;

    FILE *f_stdin = cr_get_redirected_stdin();

    fprintf(f_stdin, data);
    fclose(f_stdin);
    err = read_stdin(p);
    cr_assert_eq(err, 0);
    cr_assert_stdout_eq_str(data);
    destroy_patterns(p);
}
