#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;double r1,r2;
    double D;
    printf("Enter value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b)-4*a*c;
    int tag;
    if(D>0)
    tag=1;
    else if(D<0)
    tag=2;
    else{
        tag = 0;
    }
    switch(tag){
        case 0:
        r1= (-b+sqrt(D))/(2*a);
        r2= (-b-sqrt(D))/(2*a);
        break;
        case 1:
        r1= (-b+sqrt(D))/(2*a);
        r2= (-b-sqrt(D))/(2*a);
        break;
        case 2:
        r1= (-b)/(2*a);
        r2= (-b)/(2*a);
        break;
    }
    if(tag!=2){
        if(r1==r2)
        printf("Possible root= %0.2lf\n",r1);
        else
        printf("root1= %0.2lf\nroot2= %0.2lf\n",r1,r2);
    }
    else{
        int d=-D;
        printf("Root1 = %0.2lf+%0.2lfi\n",r1,(sqrt(d)/(2.0*a)));
        printf("Root2 = %0.2lf-%0.2lfi\n",r1,(sqrt(d)/(2.0*a)));
    }
}