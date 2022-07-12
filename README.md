# Epitech Unit Tests
This repository will contain as many Criterion unit tests for Epitech as possible. The main goal is to have a huge tests collections to let Epitech students test their functions during the Cpool process. As you may know, an automated program will collect students assignments to apply automated tests on them and graduate their work as a result. So, to make sure the program can be greatly graduated, I thought it could be a good idea that any student who writes unit tests actaully share them to other people using a public repository. This way, any one can clone, pull for new tests, and then use them as a pre-evaluator.

## Unit Tests writing
To write unit tests, you have to read the [Criterion documentation](https://criterion.readthedocs.io/en/stable/) which will teach you how to work with the API. The, you may want to take a look at the [Epitech extra information](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/criterion.html) about this library. Make sure you're testing for what EPITECH hopes from the assignments. You can use the libc to compare functions return value, and so on... Be creative ! 🙂 

## The test file format
The test file has to respect the Coding Style and must be formatted the following way :
- file's name : `test_<test_name>.c`
- file's header :
```c
/*
** EPITECH UNIT TESTS, <YEAR>
** Authors : <INITIAL_AUTHOR> <AUTHOR_2> ...
** File description :
** Unit tests to test the <FUNC_NAME> function.
*/
```
- includes : only criterion and libc libraries are allowed. You also may include the function's prototype to be tested. For instance :
```c
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strcpy(char *dest, char const *src);
```
- test itself : the test has to contain the function to be tested, then a test name, that can be whatever you want actually. I personnaly use `test_one`, `test_two`, and so on. It may also contain the `.init` attribute, or else if useful. For instance :
```c
Test(my_isneg, test_one, .init = cr_redirect_stdout)
{
    my_isneg(-1);
    cr_assert_stdout_eq_str("N");
}
```
The test has to respect the Coding Style used on the time it's wrote.

## Opening the pull request
Once you wrote your unit tests, and they respect the Coding Style and the format described above, it's time to open a pull request. To do so, you will have to describe the content of your tests. For instance :
```markdown
I wrote `number_of_tests` tests in order to test the `func_name` function.
It uses some libc functions / It does not use any libc function.
It tests for the result into the console / It does not test for the result into the console.
```

