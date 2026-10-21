#include <stdio.h>
int main(){
    int i = 1,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=2;j++){
            if(i++&&(j==1)){
                printf("good: i=%d,j=%d\n",i,j);
            }
            else{
                printf("GOD: i=%d,j=%d\n",i,j);
            }
        }
    }
    return 0;
}