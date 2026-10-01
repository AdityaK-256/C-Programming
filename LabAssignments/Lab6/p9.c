#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int ar[size];
    printf("Enter Array elements: ");
    for(int i =0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    int lsum=0,rsum=0;
    printf("Equilibrium indices are: ");
    for(int i = 0;i<size;i++){
        for(int j=0;j<i;j++){
            lsum+=ar[j];
        }
        for(int j= i+1;j<size;j++){
            rsum+=ar[j];
        }
        if(lsum==rsum){
            printf("%d,",i);
        }
        lsum=0,rsum=0;
    }
    printf("\n");
}