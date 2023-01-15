#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks(0-100) :");
    scanf("%d", &marks);

    if(marks>=0 && marks<=30){
        printf("chutiya balak\n");
    }else if(marks>30 && marks<=100) {
        printf("munna pass ho gya\n");
    }else{
        printf("ye to topper ka bhi baap h");
    }
    return 0;
}