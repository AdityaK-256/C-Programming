#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int vow=0,cons=0;
    for(int i= 0;str[i]!=0;i++){
        if(isalpha(str[i])){
            char c = str[i];
            if(isupper(c)){
                int k=c-'\0';
                k=k+32;
                c=k+'\0';
            }
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vow++;
            }
            else{
                cons++;
            }
        }
    }
    printf("No. of vowel: %d\n",vow);
    printf("No. of consonants: %d\n",cons);
}