
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // strings

    char my_name[] = "Daniel Ouattara";
    printf("%s\n", my_name);

    printf("%lu\n", sizeof(my_name)); // Outputs 16
    printf("%hd\n", strlen(my_name)); // Outputs 15 ?? WHY
    return 0;
}
