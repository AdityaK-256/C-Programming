#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int ar[size];
    printf("Enter the array elements: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    //reversing;
    for(int i = 0;i<size/2;i++){
        int temp = ar[i];
        ar[i]=ar[size-1-i];
        ar[size-1-i]=temp;
    }
    printf("Reversed array: ");
    for(int i = 0;i<size;i++){
        printf("%d,",ar[i]);
    }
    printf("\n");
}