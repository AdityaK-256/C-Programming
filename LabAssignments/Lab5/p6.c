#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);//if you will keep space after %d then it will wait for another input which would not be used anywhere
    for(int i = 1; i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}