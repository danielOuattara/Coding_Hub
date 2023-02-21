
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

    std::cout << "Hello C++ \n";

    // Single quoted String impossible in C++

    char myString[] = "<a href=\"http://www.example.com\" target=\"_blank\">Link</a>";
    std::cout << myString << std::endl;

    return 0;
}
