//p6_concatenateCorrect
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[40],b[20];
    printf("Enter a string of less than 20 characters: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter another string of less than 20 characters: ");
    fgets(b,sizeof(b),stdin);
    a[strcspn(a,"\n")]='\0';
    int flag=0,i=0,j=0;
    while(b[j]!='\0'){
        if(a[i]=='\0')
        flag=1;

        if(flag==1){
            a[i]=b[j];
            j++;
        }
        
        i++;
    }
    a[i]='\0';
    puts(a);
}   

