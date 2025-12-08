#include <stdio.h>
void print_add(int a)
{
    printf("The address of variable a is %u \n", &a);
}
int main()
{
    int i = 4;
    printf("The value of variable %d \n", i);
    print_add(i);
    printf("The address of i is %u \n", &i);
    return 0;
}