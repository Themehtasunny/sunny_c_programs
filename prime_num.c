#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter the number :");
    scanf("%d",&num);
    for (int i = 1; i < num+1; i++)
    {
        if (num%i==0)
            count++;
    }
    if (count==2){
        printf("prime number");
        printf("\nprime number is good");
        }
    else
    printf("number is not prime");
    return 0;
}