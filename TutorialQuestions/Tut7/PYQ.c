#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char s1[50],s2[50];
    printf("Enter string1: ");
    scanf("%[^\n]",s1);
    printf("Enter string2: ");
    scanf(" %[^\n]",s2);
    if(strlen(s1)!=strlen(s2)){
        printf("STRINGS DO NO NOT HAVE SAME SIZE!");
        exit(0);
    }
    int f1=0,f2=0;
    for(int i = 0;s1[i]!='\0';i++){
        char ch2 =s2[i],ch1=s1[i];
        for(int j = 0;s1[j]!='\0';j++){
            if(s2[j]==ch2){
                if(s1[j]!=s1[i]){
                    f1=1;
                }
            }
            if(s1[j]==ch1){
                if(s2[j]!=s2[i]){
                    f2=1;
                }
            }
            if(f1||f2){
                printf("FALSE\n");
                exit(0);
            }
        }
    }
    printf("TRUE\n");

}