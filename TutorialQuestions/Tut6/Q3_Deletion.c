#include <stdio.h>
int main(){
    int size,pos;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int ar[size];
    printf("Enter the array elements: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the position of element you want to delete\nconsidering that array starts from 0 index: ");
    scanf("%d",&pos);
    for(int i=pos;i<size-1;i++){
        ar[i]=ar[i+1];
    }
    ar[size-1]=0;
    printf("Modified array: ");
    for(int i =0;i<size-1;i++){
        printf("%d,",ar[i]);
    }
    printf("\n");
}