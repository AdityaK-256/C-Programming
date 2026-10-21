#include <stdio.h>
#include <stdlib.h>
int* findFactors(int num, int* count);
int main(){ 
    int ct=0,number;//do initialise ct
    printf("Enter a number: ");
    scanf("%d",&number);
    
    int *allfac=findFactors(number,&ct);//initialise allfac as pointer and not array
    printf("Factors of %d are: ",number);
    for(int i = 0;i<ct;i++){
        printf("%d,",allfac[i]);
    }
    printf("\n");
    free(allfac);
}
int* findFactors(int num, int* count){
    int *p;
    p=(int*) malloc(num*sizeof(int));
    *(p+ *count)=1;
    
    (*count)++;
    for(int i =2;i<num;i++){
        if(num%i==0){//please use % and not /
            *(p + *count)=i;
            (*count)++;
        }
    }
    *(p + *count)=num;
    (*count)++;
    return p;
}