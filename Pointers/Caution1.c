#include <stdio.h>
#include <string.h>
int main(){
    char *s ="JIIT";
    printf("%s\n",s);
    char *t;
    strcpy(t,"JIIT");//Segmentation fault because t does not have a valid memory address as it has not been initialised.
    printf("%s\n",t);
    return 0;
}