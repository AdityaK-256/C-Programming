#include <stdio.h>
int main(){
    int a=7;
    for(int i=7;i>0;i--){
        for(int j=1;j<=15;j++){
            if(j>i&&j<=15-a){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        a--;
    }
    int b=4;
    for(int i = 8;i<=13;i++){
        for(int j = 1;j<=15;j++){
            if(j<=b/2||j>15-b/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        b=b+2;
        printf("\n");
    }
}