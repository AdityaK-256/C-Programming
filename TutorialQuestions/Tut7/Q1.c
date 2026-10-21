#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter a string: ");
    char s[50];
    scanf("%[^\n]",s);
    printf("**");
    for(int i = 0;s[i]!=0;i++){
        printf("*");
    }
    printf("******");
    printf("\n\n");
    printf("*  %s    *\n\n",s);
    printf("**");
    for(int i = 0;s[i]!=0;i++){
        printf("*");
    }
    printf("******\n");
}