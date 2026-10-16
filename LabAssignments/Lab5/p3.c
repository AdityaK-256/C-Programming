#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float r1,r2;
    printf("Compare your quadratic equation with 'ax^2+bx+c=0' and enter the values of a,b and c: \n");
    scanf("%d%d%d",&a,&b,&c);

    float D = b*b - 4*a*c;
    int tag = 0;
    printf("The roots of the equation are: \n");
    if(D>0){
        tag=1;
    }
    else if(D==0){
        tag=0;
    }
    else{
        tag=-1;
    }
    switch(tag){
        case 1:
        printf("%0.2f \n",(-b-sqrt(D))/(2.0*a));
        printf("%0.2f \n",(-b+sqrt(D))/(2.0*a));
        break;
        case 0:
        printf("%0.2f \n",-b/(2.0*a));
        break;
        case -1:
        printf("%0.2f + %0.2fi \n",-b/(2.0*a),sqrt(-D)/(2.0*a));
        printf("%0.2f - %0.2fi \n",-b/(2.0*a),sqrt(-D)/(2.0*a));
        break;

    }
}