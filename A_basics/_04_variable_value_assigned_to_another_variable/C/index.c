
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{

    int age;
    age = 34;
    int herAge;
    herAge = age;

    bool hasChildren;
    hasChildren = true;
    bool sheHasChildren;
    sheHasChildren = hasChildren;

    printf("Hello C\n");

    printf("%d\n", hasChildren); // 1
    printf("%d\n", age);         // 34

    printf("%d\n", sheHasChildren); // 1
    printf("%d\n", herAge);         // 34
    return 0;
}
