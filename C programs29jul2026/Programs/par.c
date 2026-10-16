#include <stdio.h>
int main(){
    int n=4;
    int l = n*2-1;
    int a=-1;
    int k=0;
    for(int i = 0;i<l;i++){
        for(int j = 0;j<l;j++){
            k=n-i;
            if(i==0||j==0||i==l-1||j==l-1){
                printf("%d",n);
            }
            else if(j>a||j<=l-1){
                printf("%d",k);
            }
            else{
                printf("%d",k+1);
            }
        }
        printf("\n");
        a++;
    }
}