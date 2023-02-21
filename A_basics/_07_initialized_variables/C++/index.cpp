
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

    // initialized variables

    int a;
    std::cout << a << std::endl; // 0

    int b = 123;
    std::cout << b << std::endl; // 123

    double c;
    std::cout << c << std::endl; // 0.000000

    std::cout << a + b << std::endl;

    a = a + 1;
    std::cout << a << std::endl; // 1

    c += 12.2344;
    std::cout << c << std::endl; // 12.234400

    char letter;
    std::cout << letter << std::endl; // empty

    letter = 'W';
    std::cout << letter << std::endl; // W

    std::string phrase;
    std::cout << phrase << std::endl; // empty

    phrase = "Hello world";
    std::cout << phrase << std::endl;

    return 0;
}
