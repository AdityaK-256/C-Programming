#include <stdio.h>
int main(){
    int size,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int ar[size];
    printf("Enter array elements: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Input position to delete: ");
    scanf("%d",&pos);
    for(int i =pos-1;i<size-1;i++){
        ar[i]=ar[i+1];
    }
    printf("Array elements: ");
    for(int i=0;i<size-1;i++){
        printf("%d,",ar[i]);
    }
    printf("\n");
}