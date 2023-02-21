
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char myString[] = "This is the start. "
                      "This is the end.";
    printf("%s \n", myString);

    //------------------------------------

    char start[] = "This is the start";
    printf("%s \n", start);

    char end[] = "This is the end";

    strcat(start, end);
    printf("%s \n", start);

    return 0;
}
