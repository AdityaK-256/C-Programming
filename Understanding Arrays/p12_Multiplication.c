#include <stdio.h>
#include <stdlib.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of rows of matrix1: ");
    scanf("%d",&r1);
    printf("Enter the number of columns of matrix1: ");
    scanf("%d",&c1);
    printf("Enter the number of rows of matrix2: ");
    scanf("%d",&r2);
    printf("Enter the number of columns of matrix2: ");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("Invalid matrix orders. ");
        exit(0);
    }
    int ar1[r1][c1],ar2[r2][c2],multi[r1][c2];
    //inp
    printf("Enter elements of the matrix1: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("Enter elements of the matrix2: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&ar2[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            sum+=ar1[i][j]*ar2[j][i];
        }
    }
}