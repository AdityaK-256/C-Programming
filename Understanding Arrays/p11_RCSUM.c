//IMP
#include <stdio.h>
//#include <math.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int ar[r][c];
    int r1[r],c1[c];
    //inp
    printf("Enter elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int rsum=0,csum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            rsum+=ar[i][j];
            csum+=ar[j][i];
        }
        r1[i]=rsum;
        c1[i]=csum;
        rsum=0;csum=0;
    }

    for(int i=0;i<r+c;i++)
    {
        if(i>=r){
            printf("Sum of elements of column %d = %d\n",i-r+1,c1[i-r]);
        }
        else{
            printf("Sum of elements of row %d = %d\n",i+1,r1[i]);
        }
    }
}