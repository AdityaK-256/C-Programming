//VVIMP
#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int count=0;
    for(int i = 0;i<strlen(str)+1;i++){
        if(i!=0){
            if(str[i-1]==str[i]){
                count++;
            }
            else{
                printf("%c%d",str[i-1],count+1);
                count=0;
            }
        }
    }
    printf("\n");
    return 0;
}

// Enter a string: mississippi
// m1i1s2i1s2i1p2i1
// Enter a string: aaabbc
// a3b2c1
// Enter a string: aaabbb
// a3b3