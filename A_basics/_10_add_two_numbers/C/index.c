
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello C\n");

    const short int MY_NUM = 5 + 10;

    printf("%hd\n", MY_NUM); // 15
    return 0;
}
