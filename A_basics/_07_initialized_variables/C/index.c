
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    // initialized variables

    int a;
    printf("%hd\n", a); // 0

    int b = 123;
    printf("%hd\n", b); // 123

    double c;
    printf("%f\n", c); // 0.000000

    printf("%hd\n", a + b);

    a = a + 1;
    printf("%hd\n", a); // 1

    c += 12.2344;
    printf("%f\n", c); // 12.234400

    char letter;
    printf("%c\n", letter); // empty

    letter = 'W';
    printf("%c\n", letter); // W

    char phrase[];
    printf("%s\n", phrase);

    phrase = "Hello world";
    printf("%s\n", phrase);

    char phrase2[5];
    printf("%s\n", phrase);

    phrase2[0] = "H";
    printf("%s\n", phrase2);

    return 0;
}
