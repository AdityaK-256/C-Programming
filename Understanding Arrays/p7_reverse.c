//VVVVIMP
//p7_reverse
#include <stdio.h>
int main(){
    char str[20];
    int len=0;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    while(str[len]!='\0'&&str[len]!='\n')//very imp: && should be used and not ||
    {
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
    puts(str);
}
