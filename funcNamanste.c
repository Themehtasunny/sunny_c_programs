#include<stdio.h>
void namaste();
void hello();

int main (){
    printf("enetr n for namaste & h for hello :");
    char ch;
    scanf("%c", &ch);

    if(ch=='n') {
        namaste();
    } else {
        hello();
    }
     return 0;
}
    void namaste() {
    printf("namaste\n");
    }

    void hello() {
        printf("hello\n");
    
    }