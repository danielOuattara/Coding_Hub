
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    // Single quoted String impossible in C

    char myString[] = "<a href=\"http://www.example.com\" target=\"_blank\">Link</a>";
    printf("%s \n", myString);

    return 0;
}
