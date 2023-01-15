#include<stdio.h>
int main(){
    char ch ;
    printf("enter a character\n");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z'){
        printf("upper case\n");
    }else if(ch>='a' && ch<='z'){
        printf("lower cae\n");
    }else{
        printf("abe ye kya likh dia");
    }
    return 0;
}