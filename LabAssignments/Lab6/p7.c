#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int ar[size];
    printf("Array elements before rotating: ");
    for(int i =0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    int temp = ar[0];
    for(int i =0;i<size-1;i++){
        ar[i]=ar[i+1];
    }
    ar[size-1]=temp;
    printf("Array elements after rotating: ");
    for(int i =0;i<size;i++){
        printf("%d,",ar[i]);
    }
    printf("\n");
}
