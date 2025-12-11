#include <stdio.h>
int mul(int a);

int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    printf("The times of number %d is %d .\n", x, mul(x));

    return 0;
}
int mul(int a)
{
    // int a;
    int result = a * 10;
    return result;
}