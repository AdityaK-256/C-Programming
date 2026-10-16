#include <stdio.h>
int main(){
    int var = 0;
    int *ptr;
    printf("Unintitialised pointer: %p\n",ptr);
    printf("Address of pointer ptr: %p\n",&ptr);

    printf("Address of variable var = %p\n",&var);
    ptr = &var;
    //• Dereferencing is the act of physically walking
    // up to that house, knocking on the door, and
    // going inside to see or change what is within.

    *ptr = 5;//means go to address of ptr and put value at rhs at the place where the pointer in pointing
    printf("Value of var = %d\n",var);
    printf("Address stored in the ptr = %p\n",ptr);
    printf("Value at address stored in ptr = %d\n",*ptr);

    return 0;
}