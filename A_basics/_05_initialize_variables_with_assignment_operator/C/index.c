
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{

    int age = 39;
    int herAge = 34;
    bool hasChildren = true;
    bool sheHasChildren = true;

    printf("Hello C\n");

    printf("%d\n", hasChildren); // 1
    printf("%d\n", age);         // 34

    printf("%d\n", sheHasChildren); // 1
    printf("%d\n", herAge);         // 34
    return 0;
}
