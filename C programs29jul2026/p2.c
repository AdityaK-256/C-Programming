#include <stdio.h>
int main(){
    int f=1;
    int a=0;
    for(int i =1;i<=7;i++,a++){
        for(int j =1;j<=7-a;j++){
            printf(" ");
        }
        
        printf(" %d\n",f);
        f*=11;
    }
}
