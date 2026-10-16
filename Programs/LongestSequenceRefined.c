#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
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
            if(count>pcount){
                pcount=count;
                phigh = low+count+1;//added 1 because the character whose after character is not is sequence is not counted by count variable.
                plow=low;
            }
            flag=1;
            count=0;
            
        }
    }
    printf("Longest sequence: ");
    for(int i = plow;i<phigh;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}