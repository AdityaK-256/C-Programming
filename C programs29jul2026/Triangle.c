#include <stdio.h>
int main(){
    int c =0;
    for(int i = 0;i<50;i++){
        for(int j =50;j>=i;j--){
            printf(" ");
        }
        for(int a = 0;a<=2*c;a++){
            printf("*");
        }
        c++;
        printf("\n");
    }
return 0;
}