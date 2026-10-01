//p3_insertion
#include <stdio.h>
#define Max 100
int main(){
    int arr[Max];
    int size,num,pos,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter array elements: ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be inserted: ");
    scanf("%d",&num);
    printf("Enter pos where %d has to be inserted: ",num);
    scanf("%d",&pos);//also warn for invalid pos
    int current=num;
    for(int i=pos-1;i<=size;i++){
        int temp = arr[i];
        arr[i]=current;
        current=temp;
    }
    //printing
    printf("New array: ");
    for(int i=0;i<size+1;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    /*  
        //Make room for new array element by shifting to right 
        for(i=size; i>=pos; i--)
        {
        arr[i] = arr[i-1];
        }
        // Insert new element at given position and increment size
        arr[pos-1] = num;
        size++;
    */
}