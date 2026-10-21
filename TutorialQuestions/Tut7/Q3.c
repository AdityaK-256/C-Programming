#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    //printf("New string: %s\n",str);
    str[strcspn(str,"\n")]='\0';
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(int j =i;str[j]!=0;j++){
                str[j]=str[j+1];
            }
        }
    }
    printf("New string: %s\n",str);
}