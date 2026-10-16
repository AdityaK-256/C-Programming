#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int tag=0;
    if(n>0){
        tag=1;
    }
    else if(n<0){
        tag=-1;
    }
    switch(tag){
        case 1:
        printf("%d is positive.\n",n);
        break;
        case -1:
        printf("%d is negative.\n",n);
        break;
        default:
        printf("%d is zero.\n",n);
    }
}