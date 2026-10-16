#include <stdio.h>
int main(){
    int n=0;
    printf("Input the amount: ");
    scanf("%d",&n);
    int notes[] = {100,50,20,10,5,2,1};
    //int count [sizeof(notes)] ;
    printf("There are: \n");
    int length = sizeof(notes)/sizeof(notes[0]);//******
    for(int i = 0; i<length;i++){
        printf("%d Note(s) of %d\n", (n/notes[i]),notes[i]);
        n=n%notes[i];
    }
}
