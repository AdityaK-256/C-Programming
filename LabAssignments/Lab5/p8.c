#include <stdio.h>
int main(){
    int n, sum=0;//Imp
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i<=n;i=i+2){
        sum+=i;
    }
    printf("Sum of odd digits = %d\n",sum);

}