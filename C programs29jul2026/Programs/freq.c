#include <stdio.h>

#include<stdlib.h>

int main()
{
    int arr[50];
    int key, size,last;
    printf("Enter size of array");
    scanf("%d", &size);
    printf("Enter array elements");
    for(int i=0;i<size;i++)
    scanf("%d", &arr[i]);
    
    int c=0;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(arr[i]==arr[j]){
                if(j<i){
                    c=0;
                    continue;
                }
                c++;
            }
                
            
        }
        if(c!=0)
        printf("%d occurs %d time\n",arr[i],c+1);
        c=0;
    }
}