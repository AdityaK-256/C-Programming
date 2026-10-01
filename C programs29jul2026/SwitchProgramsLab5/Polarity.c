#include <stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int result = n>0;
   // _Bool x = n>0;
   // printf("%s",x);
    switch(result){
        case 1:
        printf("POSITIVE NUMBER\n");
        break;
        case 0:
        printf("NEGATIVE NUMBER\n");
        break;
        default:
        printf("ZERO\n");
    }
}