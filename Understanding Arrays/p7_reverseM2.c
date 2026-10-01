//p7_reverse
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[20];
    int len=0;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    while(str[len]!='\0'&&str[len]!='\n'){
        len++;
    }
    int max=len/2;
    int i=0;
    while(i<max){
        int temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
        i++;
    }
    str[len]='\0';
    int j=0;
    while(str[j]!='\0'){
        printf("%c",str[j]);
        j++;
    }
    printf("\n");
    //puts(str);
}
