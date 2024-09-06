
// Just because std <string> comes along with <iostream>, doesn't mean you
// shouldn't #include <string>. Every header file you want to use needs to
// be explicitly included.
#include <iostream>
#include <string>

int main()
{
    std::string message ;
    message = "Hello World! Why did this std::string work?" ;
    std::cout << message << std::endl ;
    return 0 ;
}

// const:
//      Member functions with "const" appended are functions that are denied
//      permission to change the values of the data members of their class.

// https://learn.microsoft.com/en-us/cpp/preprocessor/pragma-directives-and-the-pragma-keyword?view=msvc-170
// https://en.wikipedia.org/wiki/Pragma_once

// Data types in C++
// https://www.scholarhat.com/tutorial/cpp/data-types-in-cpp

// Strings in C++
// https://www.w3schools.com/cpp/cpp_strings.asp

