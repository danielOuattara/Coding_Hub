
#include <iostream>

int main(int argc, char const *argv[])
{
    printf("Hello C++\n");

    int age = 39;
    int herAge = 34;
    bool hasChildren = true;
    bool sheHasChildren = true;

    std::cout << "Hello C++ \n";
    std::cout << age << "\n";         // 23
    std::cout << hasChildren << "\n"; // 1

    printf("Hello C++\n");

    std::cout << hasChildren << "\n"; // 1
    std::cout << age << "\n";         // 34

    std::cout << sheHasChildren << "\n"; // 1
    std::cout << herAge << "\n";         // 34
    return 0;
}
