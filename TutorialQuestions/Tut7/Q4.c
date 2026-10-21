#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char e; int p;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the element you want to insert: ");
    scanf("%c",&e);
    printf("Enter the position you want ot enter the element: ");
    scanf("%d",&p);
    char temp = str[p-1];
    str[p-1]=e;
    for(int i = p;i<strlen(str);i++){
        char temp1=str[i];
        str[i]=temp;
        temp=temp1;
    }
    printf("%s\n",str);
}
/*
adityakesarwani@Adityas-MacBook-Air Tut7 % ./Q4
Enter a string: Hello I am Aditya Kearwani
Enter the element you want to insert: s
Enter the position you want ot enter the element: 21
Hello I am Aditya Kesarwani
*/