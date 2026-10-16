#include <stdio.h>
int main(){
    int arr[100];
    int n;
    int pos=0,neg=0,zero=0;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }

    }
    printf("There are %d positive, %d negative and %d zero\n",pos,neg,zero);
}