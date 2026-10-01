//p4_charcount
#include <stdio.h>
int main(){
    int len=0; char str[20];
    printf("Enter a string of less than 20 characters: ");
    fgets(str,sizeof(str),stdin);
    while(str[len]!='\0'&&str[len]!='\n'){
        len++;
    }
    printf("No of characters: %d\n",len);
}