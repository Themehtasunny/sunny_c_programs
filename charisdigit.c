#include<stdio.h>
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c", &c);

    if(c>='0' && c<='9')
    {
        printf("%c is digit", &c);
    }
    else{
        printf("%c is not digit", &c);
    }
    return 0;
}