#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter three numbers to get average :\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of three numbers is %f", avg(a, b, c));

    return 0;
}
float avg(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3.0;
    return result;
}