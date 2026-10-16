#include <stdio.h>
int main(){
    int a;
    int c=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int i = 2; i<=a/2;i++){
        if(a%i==0){
        c++;
        }
    }
    if (c==0){
    printf("%d is a prime number.\n",a);
    }
    else{
    printf("%d is not a prime number.\n",a);
    }

    return 0;
}