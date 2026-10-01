#include <stdio.h>
int main(){
    int n;
    printf("Enter amount:");
    scanf("%d",&n);
    int note[]={500,100, 50, 20, 10, 5, 2, 1};
    printf("note amount \t number\n");
    int temp;
    int i =0;
    while(n>0){
        temp = n/note[i];
        printf("%d \t\t %d\n",note[i],temp);
        n=n%note[i];
        i++;
    }
}