#include <stdio.h>
#include <string.h>
int main(){
    char *src = "Hello world";
    char *dest;
    strcpy(dest,src);
    printf("%s\n%s\n",src,dest);
}