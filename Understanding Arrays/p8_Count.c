#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[20];
    int l=0,d=0;
    printf("Enter a string of less than 20 characters: ");
    fgets(str,sizeof(str),stdin);
    if(strlen(str)>=20){
        printf("Invalid string size!");
        exit(0);
    }
    int i=0;
    while(str[i]!='\0'&&str[i]!='\n'){
        if((str[i]>='A'&&str[i]<=90)||(str[i]>='a'&&str[i]<='z')){
            l++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            d++;
        }
        i++;
    }
    printf("No of letters: %d\n",l);
    printf("Number of digits: %d\n",d);
    return 0;
}