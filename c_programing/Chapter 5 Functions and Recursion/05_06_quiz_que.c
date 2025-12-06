#include <stdio.h>
int area(int side);

int main()
{
    int c, side;
    printf("Enter the value of side :\n");
    scanf("%d", &side);
    c = area(side);
    printf("The area of square is %d\n", c);
    return 0;
}
int area(int side)
{
    int result = side * side;
    return result;
}