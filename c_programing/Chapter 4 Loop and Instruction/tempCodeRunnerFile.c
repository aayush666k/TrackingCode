#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", i++);
    printf("The value after ++i is %d\n", ++i);
    printf("The value after i is %d\n", i);
    i += 13;
    printf("The value after i is %d\n", i);

    return 0;
}