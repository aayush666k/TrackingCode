#include <stdio.h>
void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum / 2);
}
int main()
{
    int i, j, sum;
    float avg;
    i = 5;
    j = 6;
    sum_and_avg(i, j, &sum, &avg);
    printf(" The value of sum and avg are %d and %f . \n", sum, avg);
    return 0;
}