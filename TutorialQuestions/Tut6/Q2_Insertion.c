//VVIMP
//Element insertion program
#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int ar[size+1],pos,x;
    printf("Enter array elements: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the position at which you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert:");
    scanf("%d",&x);
    int temp = ar[pos-1];
    ar[pos-1]=x;
    for(int i = pos;i<size;i++){
        int temp1=ar[i];
        ar[i]=temp;
        temp=temp1;
    }
    ar[size]=temp;
    for(int i = 0;i<size+1;i++){
        printf("%d,",ar[i]);
    }
    printf("\n");
}