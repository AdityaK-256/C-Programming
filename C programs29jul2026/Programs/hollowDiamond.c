#include <stdio.h>
int main(){
    int centre=8/2;
    int left =centre; int right =centre;
    int a=0;
    int c=1;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(j==left-a){
                if(a>0){
                    printf("%d",1);
                }
                else{
                    printf("%d",c);
                }
                
            }
            else if(j==right+a){
                if(a>0){
                    printf("%d",c);
                }
                else{
                    printf("%d",1);
                }
            }
            else{
                printf(" ");
            }
            
        }
        if(i<centre){
            c=c+1;
        }
        else{
            c=c-1;
        }
        if(i==centre){
            a=-a;
        }
        a++;
        printf("\n");
    }
}