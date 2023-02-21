
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    // Single quoted String impossible in C

    char myString[] = "FirstLine\n\t\\SecondLine\nThirdLine";
    printf("%s \n", myString);

    return 0;
}
