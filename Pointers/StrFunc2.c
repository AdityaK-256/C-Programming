#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *src = "Hello world";
    // char *dest=malloc(sizeof(src));//size of src gives pointer size
    //char *dest=malloc(strlen(src)+1);//implicit typecasting
    char *dest=(char *) malloc(strlen(src)+1);//explicitly typecasting
    printf("%s\n%s\n",src,dest);
    strcpy(dest,src);
    printf("%s\n%s\n",src,dest);
    free(dest);
}