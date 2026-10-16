#include <stdio.h>
int main(){
    int c =0;
    for(int i = 0;i<10;i++){
        for(int j =10;j>=i;j--){
            printf(" ");
        }
        for(int a = 0;a<=2*c;a++){
            if(i==0){
                continue;
            }
            printf("*");
        }
        c++;
        printf("\n");
    }
return 0;
}