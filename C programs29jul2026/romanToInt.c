#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int romanToInt(char* s) {
    //char* str = "IVXLCDM";
    int sum = 0;
    
    if(strlen(s)>=1&&strlen(s)<=15){
        for(int i = 0;i<strlen(s);i++){
            char ch = s[i];
            //char t =ch+s[i];
            
            if(s[i]== 'I'&&s[i+1]=='V'){
                sum +=4;i+=1;
            }
            else if(s[i]== 'I'&&s[i+1]=='X'){
                sum +=9;i+=1;
            }
            else if(s[i]== 'X'&&s[i+1]=='L'){
                sum +=40;i+=1;
            }
            else if(s[i]== 'X'&&s[i+1]=='C'){
                sum +=50;i+=1;
            }
            else if(s[i]== 'C'&&s[i+1]=='D'){
                sum +=400;i+=1;
            }
            else if(s[i]== 'C'&&s[i+1]=='M'){
                sum +=900;i+=1;
            }
            else{
                switch(ch){
                    case 'I':
                    sum+=1;
                    break;
                    case 'V':
                    sum+=5;
                    break;
                    case 'X':
                    sum+=10;
                    break;
                    case 'L':
                    sum+=50;
                    break;
                    case 'C':
                    sum+=100;
                    break;
                    case 'D':
                    sum+=500;
                    break;
                    case 'M':
                    sum+=1000;
                    break;
                    default:
                    printf("INVALID INPUT");
                    exit(0);
                }
            }
        }
        return sum;
    }
    else{
        return -1;
    }
}
int main() {
    char s[] = "III";

    printf("%d\n", romanToInt(s));

    return 0;
}