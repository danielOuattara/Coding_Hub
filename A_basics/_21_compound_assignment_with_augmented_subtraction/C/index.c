
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    short int a = 3;
    short int b = 17;
    float c = 12.54f;

    // Only change code below this line
    a -= 12;
    b -= 9;
    c -= 7;

    printf("%hd \n", a);
    printf("%hd \n", b);
    printf("%f \n", c);

    return 0;
}
