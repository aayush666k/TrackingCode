#include <stdio.h>

int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;
    // ptr = &i ; ptr address of i,, *(value of ), *ptr--> value of &i, * kha jata hai &, i
    printf("The address of ptr_ptr is %u\n", &ptr_ptr);
    printf("The value stored in ptr_ptr is %u\n", ptr_ptr);
    printf("The Address of ptr is %u\n", &ptr);
    printf("The value stored in ptr_ptr is %d\n", *ptr_ptr);
    printf("The Address of i is %d\n", &i);
    printf("The value of i is %d\n", **ptr_ptr);
    return 0;
}