
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    const short int AGE = 34;
    printf("%hd\n", AGE); // 34

    const bool HAS_CHILDREN = true;
    printf("%hd\n", HAS_CHILDREN); // 1

    return 0;
}
