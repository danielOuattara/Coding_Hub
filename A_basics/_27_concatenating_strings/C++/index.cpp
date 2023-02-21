
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

    std::string myString = "This is the start. "
                           "This is the end.";
    std::cout << myString << std::endl;

    //----------------------------------------

    std::string start = "This is the start ";
    std::string end = "This is the end";
    std::string myString2 = start + end;
    std::cout << myString2 << std::endl;

    //----------------------------------------

    start += end;
    std::cout << start << std::endl;

    return 0;
}
