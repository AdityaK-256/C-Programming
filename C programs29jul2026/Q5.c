#include <stdio.h>
int main(){
    printf("Input no. of days: ");
    int days;
    scanf("%d",&days);
    printf("%d Years(s)\n",(days/365));
    days = days%365;
    printf("%d Month(s)\n",(days/30));
    days = days%30;
    printf("%d Days(s)\n",days);
}