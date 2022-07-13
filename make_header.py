"""
This file's main purpose is to read tests from the `chapters` (ex : B-CPE-100).

Within these chapters, the script reads through `days` (ex : Day03).

In the end, it reads all test files contained in the `days` folder to remove the EPITECH
header in order to replace it with another one corresponding the the described format
of the README.md.

TODO : Checks whether it's an EPITECH header or a UNIT TEST header to not remove
       the list of all authors each time the script is ran.
"""

import os
import datetime

AUTHOR_USERNAME="Ximaz"
assert AUTHOR_USERNAME, "You must replace the author username by your's."

def make_header(username: str, func_name: str) -> str:
    assert username, "No username provided."
    assert func_name, "No function name provided."
    year = datetime.datetime.now().date().strftime("%Y")

    return f"""/*
** EPITECH UNIT TESTS, {year}
** Authors : {username}
** File description :
** Unit tests to test the {func_name} function.
*/"""

def has_header_component(line: str) -> bool:
    components = ("/*", "**", "*/",)

    for c in components:
        if line.startswith(c):
            return 1
    return 0

def remove_header(test_content: str) -> str:
    assert test_content, "No text provided."
    lines = test_content.split('\n')
    lines_len = len(lines)
    i = 0

    while i < lines_len and lines[i] and has_header_component(lines[i]):
        i += 1
    return '\n'.join([lines[j] for j in range(i, lines_len)])

def handle_day(day: str):
    for test in os.listdir(day):
        test_path = os.path.join(day, test)
        print("    Test : " + test)
        test_content = ""
        with open(test_path, 'r') as stream:
            test_content = stream.read()
        stream.close()
        test_content = remove_header(test_content)
        assert test_content, "The test file only contains a header. " + test_path
        with open(test_path, 'w') as stream:
            func_name = test[len("test_"):-len(".c")]
            header = make_header(AUTHOR_USERNAME, func_name)
            stream.write(header)
            stream.write('\n')
            stream.write(test_content)
        stream.close()

def handle_chapter(chapter: str):
    for day in os.listdir(chapter):
        path = os.path.join(chapter, day)
        if os.path.isdir(path):
            print("  Day : " + day)
            handle_day(path)

def main():
    for chapter in os.listdir("."):
        if os.path.isdir(chapter) and not chapter.startswith('.'):
            print("Chapter : " + chapter)
            handle_chapter(chapter)

if __name__ == "__main__":
    # main()
    handle_chapter("B-CPE-101")
