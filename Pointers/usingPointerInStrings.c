//usingPointerInStrings.c
#include <stdio.h>
int main(){
    char s[20];
    char str[] = "Hello";
    char *ptr;
    ptr = str;
    //*ptr='J';OR
    //ptr[0]='K';
    0[ptr]='l';
    printf("%s",ptr);
    printf("\n");
    printf("Enter string: ");
    scanf("%[^\n]",s);
    printf("%s\n",s);
}