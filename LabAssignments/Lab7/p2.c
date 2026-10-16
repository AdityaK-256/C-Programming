#include <stdio.h>
#include <string.h>
int main() {

    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    puts(str);
    
    int count=0;
    int flag=1;
    for(int i = 0;str[i]!='\0';i++){
        for(int j = 0; str[j]!='\0';j++){
            if(str[i]==str[j]||(int)str[i]==(int)str[j]-32||(int)str[i]==(int)str[j]+32){
                if(j<i){
                    flag = 0;
                    break;
                }  
                count++;
            }
        }
        if(flag==1)
            printf("%c-->%d\n",str[i],count);
        count=0;
        flag=1;
    }
}
