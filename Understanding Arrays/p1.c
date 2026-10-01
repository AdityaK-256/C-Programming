#include <stdio.h>
int main(){
    int marks[5];
    //int mark[];error
    int marks2[]={1,4,10};
    printf("%d\n",marks[3]);
    printf("%d\n",marks2[0]);
    //printf("%d",marks2[3]);//IN ONLINE COMPILER FOR ALL VALUES ABOVE 2 output is 0
    //In C, array’s bound are not checked, programmers need to take care of that:
    //int marks[5]={5, 7, 9, 10, 8};
    //print (“%d”, marks[5]); //it will print garbage value, no error.
    
    //printing:
    for(int i = 0;i<3;i++){
        printf("%d\n",marks2[i]);
    }

    //INPUT in arrays
    

}