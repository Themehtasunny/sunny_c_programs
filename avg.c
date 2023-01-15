#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int sum;
    float avg;
    printf("enter three numbers");
    scanf("%d%d%d", &a, &b, &c);
    sum= a+b+c;
    avg= (a+b+c)/3;
    printf("%f", avg);
    return 0;
}