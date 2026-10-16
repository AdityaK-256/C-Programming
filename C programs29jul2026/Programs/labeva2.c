#include <stdio.h>
int main(){
    int num,units;
    double bill, sur;
    printf("Enter consumer number: ");
    scanf("%d",&num);
    printf("Enter number of units consumed: ");
    scanf("%d",&units);
    if(units<=100){
        bill=3*units;
    }
    else if(units<=300){
        bill = (3*100)+5*(units-100);
    }
    else{
        bill = 7*units;
    }
    if(bill>2000){
        sur=0.1*bill;
    }
    //consumer number, units consumed, basic bill, surcharge, and final bill
    printf("---------------------------\n");
    printf("\t Electricity Bill\n");
    printf("---------------------------\n");
    printf("Consumer number: %d\n",num);
    printf("Units consumed: %d\n",units);
    printf("Basic bill: %0.2lf\n",bill);
    printf("Surcharge: %0.2lf\n",sur);
    printf("Final bill: Rs. %0.2lf\n",(bill+sur));
    if(bill+sur<1000){
        printf("Low consumption.\n");
    }
    else if(bill+sur<2500){
        printf("Moderate consumption.\n");
    }
    else{
        printf("High consumption.\n");
    }
}