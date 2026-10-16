#include <stdio.h>
int main(){
    int f=1;
    int a=0;
    for(int i =1;i<=7;i++,a++){
        for(int j =1;j<=7-a;j++){
            printf(" ");
        }
        for(int a=f;a>0;a=a/10){
            printf("%d ",a%10);
        }
        printf("\n");
        f*=11;
    }
}
