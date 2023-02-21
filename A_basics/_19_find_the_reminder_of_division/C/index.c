
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    const short int MY_NUM = 13 % 5;

    printf("%hd\n", MY_NUM);
    return 0;
}
