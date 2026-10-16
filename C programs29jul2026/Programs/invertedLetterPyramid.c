#include <stdio.h>
int main(){
    char ch='A';
    for(int i = 1;i<=9;i=i+2){
        for(int j=1;j<=9;j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
        ch='A';
    }
    
return 0;
}