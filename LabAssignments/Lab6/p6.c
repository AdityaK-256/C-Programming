//VVIMP
#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int ar[size];
    int flag=1;
    int c=0;
    printf("Enter %d elements in array: \n",size);
    for(int i =0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            if(ar[j]==ar[i]){
                c++;
                if(j<i)//to eleminate showing of frequency of numbers more than 1 time.
                    flag=0;
            }
        }
        if(flag==1){
            printf("%d occurs %d time(s)\n",ar[i],c);
        }
        c=0;
        flag=1;
    }
}