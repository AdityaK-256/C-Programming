#include <stdio.h>
#include <stdlib.h>
int main(){
    int roll[10],marks[10],num,pos=-1;
    for(int i=0;i<10;i++){
        printf("Enter roll number: ");
        scanf("%d",&roll[i]);
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }
    printf("Enter the roll number you want to check the marks for: ");
    scanf("%d",&num);
    for(int i = 0;i<10;i++){
        if(roll[i]==num){
            pos=i;
        }
    }
    if(pos==-1){
        printf("INVALID roll number!");
        exit(0);
    }
    else{
        printf("Marks: %d\n",marks[pos]);
    }
    return 0;
}