#include <stdio.h>
int main(){
    int age;
    char name[20];
    printf("Enter you age: ");
    scanf("%d", &age);
    printf("Your age: %d\n",age);
    printf("Enter your name:");
    // fgets(name, sizeof(name), stdin);
    scanf("%s",name);
    printf("Your name: %s\n",name);
}
//printing, commenting, input