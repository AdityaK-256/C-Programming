//VVIMP
#include <stdio.h>
int main(){
    int n1,n2;
    char op;
    printf("Enter first integer: ");
    scanf("%d",&n1);
    printf("Enter second integer: ");
    scanf("%d",&n2);
    //printf("%d",n2);
    printf("Enter either +,-,*,/ operation: ");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d + %d = %d\n",n1,n2,(n1+n2));
        break;
        case '-':
        printf("%d - %d = %d\n",n1,n2,(n1-n2));
        break;
        case '*':
        printf("%d X %d = %d\n",n1,n2,(n1*n2));
        break;
        case '/':
        printf("%d / %d = %d\n",n1,n2,(n1/n2));
        break;
        default:
        printf("Invalid input\n");
    }
}
