#include <stdio.h>
int main(){
    int N=0;
    int sum;
    int clsum=0;
    int m;
    int flag=0;
    char grade;
    int failed=0;
    int highest=1;
    double prev;//should be double and not int
    printf("Enter number of students: ");
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        printf("Enter marks in 5 subjects, each out of hundred: ");
        for(int j =0;j<5;j++){
            scanf("%d",&m);
            if(m<40){
                flag=1;
            }
            sum+=m;
        }
        double avg = sum/5.0;
        printf("Total marks out of 500= %d\n",sum);
        printf("Percentage=%0.2lf %%\n",avg);
        if(flag==0){
            if(avg>=90)
            grade='A';
            else if(avg>=80)
            grade='B';
            else if(avg>=70)
            grade='C';
            else if(avg>=60)
            grade='D';
            else if(avg>=50)
            grade='E';
            else
            grade='F';
        }
        else{
            grade = 'F';
        }
            

        printf("Grade: %c\n",grade);
        clsum+=avg;
        
        if(grade=='F')
            failed++;
        if(i!=1){
            if(prev<avg){
                highest=i;
            }
        }
        prev=avg;
        sum=0;
        flag=0;
    }
    double clavg=clsum/N;
    printf("Class Average= %0.2lf\n",clavg);
    printf("Total number of passed students: %d\n",N-failed);
    printf("Total number of failed students: %d\n",failed);
    printf("Student %d secured the highest percentage.\n",highest);
}