# Epitech Unit Tests
This repository will contain as many Criterion unit tests for Epitech as possible. The main goal is to have a huge tests collections to let Epitech students test their functions during the Cpool process. As you may know, an automated program will collect students assignments to apply automated tests on them and graduate their work as a result. So, to make sure the program can be greatly graduated, I thought it could be a good idea that any student who writes unit tests actaully share them to other people using a public repository. This way, any one can clone, pull for new tests, and then use them as a pre-evaluator.

# Unit Tests writing
To write unit tests, you have to read the [Criterion documentation](https://criterion.readthedocs.io/en/stable/) which will teach you how to work with the API. The, you may want to take a look at the [Epitech extra information](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/criterion.html) about this library.

# Opening a pull request
Once you wrote your unit tests, and you tested them to be sure the result expected by the Epitech assignement is the same you're trying to test, you can open a pull request. It has to contain all the tests file with the following format :
- file's name : `test_<test_name>.c`
- file's header :
```c
/*
** EPITECH UNIT TESTS, <YEAR>
** <AUTHOR>
** <TEST_NAME>
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

