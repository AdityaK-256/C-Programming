//traversing.c
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *p = arr;//OR int *p=&arr[0];
    for(int i = 0;i<5;i++){
        //printf("%d,",*p++);//1,2,3,4,5,
        //p++;
        //printf("%d,",arr[i]);//1,2,3,4,5,


        //printf("%d,",i[arr]);//1,2,3,4,5,
        /*i[arr] is valid because:
            - arr[i] means *(arr + i)
            - i[arr] means *(i + arr)
            Since addition is commutative, *(arr + i) and *(i + arr) are identical.
        */
        
        
        //printf("%p,",arr+i);//0x16ef62cb0,0x16ef62cb4,0x16ef62cb8,0x16ef62cbc,0x16ef62cc0,

        //printf("%d,",*(arr+i));//1,2,3,4,5,

        //printf("%d,",*(i+arr));//same

        //printf("%d,",*(&arr[0]+i));//1,2,3,4,5,

        //printf("%d",*arr);//11111;

        //printf("%d,",p[i]);//1,2,3,4,5,

        printf("%d,",i[p]);//same

    }
    printf("\n");
}
/*  Replacing printf(“%d”, *p); statement in the previous program, with below
    statements. Let’s observe the result.
    printf(“%d”, arr[i]); prints array by incrementing index
    printf(“%d”, i[arr]); prints array by incrementing index
    printf(“%d”, arr + i); prints address of all the array elements
    printf(“%d”, *(arr + i)); prints array by incrementing index
    printf(“%d”, *arr); prints value of arr[0] only
    arr++; compile time error, can’t change base address of array
*/