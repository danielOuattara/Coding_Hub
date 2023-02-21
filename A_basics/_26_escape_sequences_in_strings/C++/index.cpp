
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

    std::cout << "Hello C++ \n";

    // Single quoted String impossible in C++

    char myString[] = "FirstLine\n\t\\SecondLine\nThirdLine";
    ;
    std::cout << myString << std::endl;

    return 0;
}
