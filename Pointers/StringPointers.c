//StringPointers.c
#include <stdio.h>
int main(){
    char *s="Hello";
    printf("%s",s);//Hello
    printf("\n");
    printf("%c",*s);//H
    printf("\n");
    printf("%c",*(s+1));//e
    printf("\n");

    char *str;
    printf("Enter another string\n");
    fgets(str,100,stdin);//Segmentation fault because str does not have a valid memory address as it has not been initialised.
    printf("The string is: ");
    puts(str);
    return 0;
    
}