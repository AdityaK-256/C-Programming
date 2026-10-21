/*Prog 5: Consider an array
marks[ ] which stores marks
of n students. WAP to:
a) Store and print marks of n students in array marks[].
b) Find the highest and lowest marks
c) Find the average, median, mode of marks.
d) Create another array marks2 [] which stores the elements in marks[] array in non-decreasing order.*/
#include <stdio.h>
int main(){
    int n,s;
    printf("n=");
    scanf("%d",&n);
    printf("Enter number of subjects: ");
    scanf("%d",&s);
    int marks[s]; 
    int sum=0,mode=0;
    double median=0.0;
    for(int i = 0;i<n;i++){
        int h=0,l=13221;
        printf("Enter marks of student %d in %d subjects: ",i+1,s);
        for(int j = 0;j<s;j++){
            scanf("%d",&marks[j]);
            sum= sum+marks[j];
            if(marks[j]>h){
                h=marks[j];
            }
            if(marks[j]<l){
                l=marks[j];
            }
        }
        
        if(n%2==0){
            median = (marks[n/2]+marks[n/2+1])/2.0;
        }
        else{
            median = marks[(n+1)/2];
        }
        int count = 0;
        int element;
        for(int k = 0;k<s;k++){
            int temp = 0;
            for(int b=0;b<s;b++){
                if(marks[k]==marks[b]&&b<k){
                    break;
                }
                if(marks[k]==marks[b]){
                    temp++;
                }
            }
            if(temp>count){
                count = temp;
                element=marks[k];
            }
        }
        printf("Highest marks= %d\nLowest marks= %d\n",h,l);
        printf("Average= %lf\n",sum*1.0/s);
        printf("Median= %lf\n",median);
        if(count ==1){
            printf("No mode.\n");
        }
        else{
            printf("Mode of marks= %d\n",element);
        }
        
        // for(int a=0;a<s;a++){
        //     for(int b = 0;b<s-a-1;b++){
        //         if(marks[b]>marks[b+1]){
        //             int temp = marks[b];
        //             marks[b]=marks[b+1];
        //             marks[b+1]=temp;
        //         }
        //     }
        // }
        int marks2[s];
        int min=marks[0],ps;
        for(int a=0;a<s;a++){
            for(int b = 0;b<s;b++){
                if(min>marks[b]&&marks[b]!=-1){
                    min=marks[b];
                    ps=b;
                }
            }
            marks2[a]=min;
            marks[ps]=-1;
            min=101;
        }
        printf("Array in non-decreasing order: ");
        for(int v=0;v<s;v++){
            printf("%d,",marks2[v]);
        }
        printf("\n");
    }

}