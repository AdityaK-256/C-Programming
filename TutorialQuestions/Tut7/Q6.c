#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[100],pass[100];
    for(int i = 0;i<100;i++){
        pass[i]='\0';
    }
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    if(strlen(str)<7||strlen(str)>15){
        printf("LENGTH of string is INVALID!");
        exit(0);
    }
    
    for(int i = 0;str[i]!='\0';i++){
        int k=(int)str[i];
        
        if((k>=65&&k<=90)||(k>=97&&k<=122)){
            //char ch[] = ((k+2)+'\0');
            char ch[4];
            snprintf(ch,sizeof(ch),"%d",k+2);
            strcat(pass,ch);
            
            
        }
        else if(k>=48&&k<=57){
            char alpha[]={'Z','Y','X','W','V','U','T','S','R','Q'};
            char temp2[]={alpha[k-48],'\0'};
            strcat(pass,temp2);
        }
        else{
            pass[strlen(pass)+1]=str[i];
            char temp2[]={str[i],'\0'};
            strcat(pass,temp2);
        }
    }
    printf("Encrypted Password string: ");
    puts(pass);
    
}