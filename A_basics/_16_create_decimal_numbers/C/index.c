
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    float myNumber = 5.55;
    printf("%f\n", myNumber);

    myNumber = myNumber - 1;
    printf("%f\n", myNumber);

    myNumber--;
    printf("%f\n", myNumber);

    myNumber -= 1;
    printf("%f\n", myNumber);

    return 0;
}
