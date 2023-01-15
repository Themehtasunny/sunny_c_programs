#include<stdio.h>
int main() {
    int n;
   do {
     printf("enter numbers:");
       scanf("%d", &n);
       printf("%d\n", n);
   
        if(n % 7 == 0) {
            break;
        }
   } while(1);
   printf("thank you\n");
   
    return 0;
}