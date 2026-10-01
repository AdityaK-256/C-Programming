/*8. A class has marks of N students in a subject stored in a 1D array. Write a C program to:
    • Find the class average.
    • Find the highest and second-highest marks.
    • Find the number of students scoring above average.
    • Find the longest consecutive sequence of students who scored above average.
    • Display the positions of all students who obtained the highest marks.

    meaning of 4th point */

#include <stdio.h>
int main(){
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    int ar[N];
    printf("Enter marks of %d students: \n",N);
    for(int i = 0; i<N;i++){
        scanf("%d",&ar[i]);
    }
    int max,secmax,abvavg=0,longest=0,temp=0;
    max=ar[0];
    float avg=0;
    for(int i = 0;i<N;i++){
        avg+=ar[i];
    }
    avg=avg/N;
    printf("Class average = %f\n",avg);

    for(int i = 0;i<N;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]>avg){
            abvavg++;
            temp++;
        }
        else{
            if(temp>longest){
                longest=temp;
            }
            temp=0;
        }
    }
    printf("Highest marks = %d\n",max);
    printf("Students scoring the highest marks are at positions: ");
    for(int i = 0; i<N;i++){
        if(ar[i]==max){
            printf("%d,",i+1);
        }
        if(ar[i]>secmax&&ar[i]!=max){
            secmax=ar[i];
        }

    }
    printf("\n");
    printf("Second highest marks = %d\n",secmax);
    printf("The longest consecutive sequence of students who scored above average = %d\n",longest);
    
}
