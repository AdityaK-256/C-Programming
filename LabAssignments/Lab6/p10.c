#include <stdio.h>
int main(){
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    int ar[N];
    printf("Enter the array elements: ");
    for(int i = 0;i<N;i++){
        scanf("%d",&ar[i]);
    }
    int c=0;
    int dup=0,miss=0;
    for(int i = 1;i<=N;i++){
        for(int j =0;j<N;j++){
            if(ar[j]==i){
                c++;
            }
        }
        if(c>1){
            dup=i;
        }
        if(c==0){
            miss=i;
        }
        c=0;
    }
    printf("Missing = %d\n",miss);
    printf("Repeating = %d\n",dup);
}