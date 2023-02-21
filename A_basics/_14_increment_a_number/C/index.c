
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    short int myNumber = 5;

    myNumber = myNumber + 1;
    printf("%hd\n", myNumber);

    myNumber++;
    printf("%hd\n", myNumber);

    myNumber += 1;
    printf("%hd\n", myNumber);

    return 0;
}
