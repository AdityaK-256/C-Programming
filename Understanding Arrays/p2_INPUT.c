#include <stdio.h>
#include <stdlib.h>
int main(){
    //INPUT in arrays
    int size;
    int arr[50];
    printf("Enter size of array: ");
    scanf("%d",&size);
    if(size > 50)
    {
        printf("Array size cannot be greater than 50");
        exit(0);
    }
    printf("Enter array elements: ");
    for(int i = 0; i<size;i++){
        scanf("%d",&arr[i]);
    }

}