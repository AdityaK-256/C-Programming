//to insert ',' in numbers in indian number system
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int size;
    char buffer[32];
    printf("Enter the size of the string: ");
    fgets(buffer, sizeof(buffer), stdin);
    size = atoi(buffer); // or sscanf(buffer, "%d", &size);
    // Now fgets for the main string works cleanly with no leftover '\n'

    char ch[size+1];
    printf("Enter the string: \n");
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")]='\0';
    int k=0;
    int n=0;
    //3+n
    
    if(size==3){
        puts(ch);
    }
    else{
        int flag=1;
        int n=0;
        int target = 0;
        while(3+n<size)
        n++;
        char str[size+n];
        k=3;
        for(int i = size-1,a=size-1+n;i>=0;i--,a--){
            
            if(i==size-1-k&&flag==1){
                str[a]=',';
                a=a-1;
                flag=0;
                target = i-2;
            }
            
            if(flag==0){
                k=2;
                if(i==target){
                    str[a]=',';
                    a=a-1;
                    target=i-k;
                }
            }
            str[a]=ch[i];
        }
        puts(str);
    }
   
}