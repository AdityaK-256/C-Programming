#include <stdio.h>
int main(){
    int n,m;
    printf("N= ");
    scanf("%d",&n);
    printf("M= ");
    scanf("%d",&m);
    int ar[n][m];
    int tmarks[n];
    //i--->student
    //j--->subject
    int rank[n];
    for(int i=0;i<n;i++){
        rank[i]=0;
    }
    for(int i = 0;i<n;i++){
        tmarks[i]=0;
        for(int j = 0; j<m;j++){
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
            tmarks[i]=tmarks[i]+ar[i][j];
        }
    }
    printf("Total marks of \n");
    for(int i=0;i<n;i++){
        printf("Student 1= %d\n",tmarks[i]);
    }
    //for(int i=0;i<m;i++){
    //    printf("%d\n",tmarks[i]);
    //}
   
    
    // while(temp!=0){
    //     min=tmarks[0];
    //     for(int j = 0; j<temp;j++){
    //         if(tmarks[j]<min&&rank[j]==0){
    //             min=tmarks[j];
    //             pos=j;
    //         }
    //     }
    //     rank[pos]=CuRank;
    //     CuRank--;
    //     for(int i=pos;i<temp-1;i++){
    //         tmarks[i]=tmarks[i+1];
    //     }
    //     temp--;
    // }
    // for(int i=0;i<n;i++){
    //     printf("The rank of student %d is: %d\n",i+1,rank[i]);
    // }
    float subMarks[m];
    int stdNo[n];
    for(int i = 0;i<n;i++){
        stdNo[i]=i;
    }
    for(int i = 0;i<n;i++){
        for(int j= 0;j<n-i-1;j++){
            if(tmarks[j]<tmarks[j+1]){
                int t = tmarks[j];
                tmarks[j]=tmarks[j+1];
                tmarks[j+1]=t;
                int k = stdNo[j];
                stdNo[j]=stdNo[j+1];
                stdNo[j+1]=k;
            }
        }
    }
    printf("Rank Board: \n");
    for(int i=0;i<n;i++){
        //printf("The rank of student %d is: %d\n",stdNo[i]+1,i+1);
        printf("Rank %d goes to student %d.\n",i+1,stdNo[i]+1);
    }
    for(int i = 0;i<n;i++){
        subMarks[i]=0;
        for(int j = 0;j<m;j++){
            subMarks[i]+=ar[j][i];
        }
        subMarks[i]/=n;
    }
}