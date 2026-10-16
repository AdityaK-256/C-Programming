#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    // int low=0,high=0,plow=0,phigh=0,flag=1,count=0;
    // for(int i = 0;str[i]!='\0';i++){
    //     int a = str[i]-'\0';
    //     int b = str[i+1]-'\0';

    //     if(a==b-1){
    //         if(flag==1){
    //             low=i;
    //             flag=0;
    //         } 
    //         count++;

    //     }
    //     else{
    //         high = count+1;
    //         flag=1;
    //         count=0;
    //         if(high-low >phigh-plow){
    //             plow = low;
    //             phigh = high;
    //         }
            
    //     }
    //     //printf("%d\n",count);
    //     printf("%d,%d",low,high);
    //     printf(" P %d,%d, Count=%d\n",plow,phigh,count);
    // }
    // int high=0,low=0,plow=0,phigh=0,flag=1,count=0;
    // for(int i = 0;str[i]!='\0';i++){
    //     int a = str[i]-'\0';
    //     int b = str[i+1]-'\0';

    //     if(a==b-1){
    //         if(flag==1){
    //             low=i;
    //             flag=0;
    //         } 
    //         count++;
    //     }
    //     else{
    //         high = count+1;
    //         flag=1;
    //         count=0;
    //         if(high>phigh){
    //             phigh = high;
    //             plow=low;
    //         }
            
    //     }
    //     //printf("%d\n",count);
    //     printf("%d",high);
    //     printf(" P %d, Count=%d\n",phigh,count);
    // }
    int high=0,low=0,plow=0,phigh=0,flag=1,count=0,pcount=0;
    for(int i = 0;str[i]!='\0';i++){
        int a = str[i]-'\0';
        int b = str[i+1]-'\0';

        if(a==b-1){
            if(flag==1){
                low=i;
                flag=0;
            } 
            count++;
        }
        else{
            //high = count+1;
            
            if(count>pcount){
                pcount=count;
                phigh = low+count+1;//added 1 because the character whose after character is not is sequence is not counted by count variable.
                plow=low;
            }
            flag=1;
            count=0;
            
        }
        // printf("%d\n",count);
        // printf("%d",high);
        // printf(" P %d, Count=%d\n",phigh,count);
    }
    printf("Longest sequence: ");
    for(int i = plow;i<phigh;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}