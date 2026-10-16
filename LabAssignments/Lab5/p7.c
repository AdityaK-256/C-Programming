#include <stdio.h>
int main(){
    int n, sum=0;//Imp
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = n; i>0;i=i/10)
        sum+=(i%10);

    printf("Sum of digits = %d\n",sum);

}
