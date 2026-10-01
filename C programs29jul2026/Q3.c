#include <stdio.h>
int main(){
    int hr,amthr;
    char EmID[10];
    printf("Input the Employee ID(Max. 10 chars): ");
    scanf("%s",EmID);
    printf("Input the working hrs: ");
    scanf("%d",&hr);
    printf("Salary amount/hr: ");
    scanf("%d",&amthr);
    double salary = hr*amthr;
    printf("Employees ID = %s\n",EmID);
    printf("Salary = $ %0.2lf\n",salary);
}