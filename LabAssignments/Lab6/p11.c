#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a=0,b=0,d=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int A[n],B[n];
    printf("A= ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("B= ");
    for(int i=0;i<n;i++){
        scanf("%d",&B[i]);
    }
    /*int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j=j++){

        }
    }*/
   int flag=0;
   for(int i = 0;i<n;i++){
        a=a*10+A[i];
        b=b*10+B[i];
   }
   int c=0;
   for(int i = n-1,k=1;i>=1;i--,k++){
        int Q = b/(int)pow(10,i);
        int R = b%(int)pow(10,i);
        c=R*(int)pow(10,k)+Q;
        if(a==c){
            flag=1;
            break;
        }
   }
   

}