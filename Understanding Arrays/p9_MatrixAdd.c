#include <stdio.h>
#include <stdlib.h>
int main(){
    int r,c;
    printf("Enter number of rows of the matrix: ");
    scanf("%d",&r);
    printf("Enter number of columns of the matrix: ");
    scanf("%d",&c);

    int ar1[r][c];
    int ar2[r][c];
    int add[r][c];
    //Inp mat1
    printf("Input elements of matrix 1: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    //Inp  mat2
    printf("Input elements of matrix 2: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&ar2[i][j]);
        }
    }
    //addition
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    //printing
    printf("Sum of mat1 and mat2:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

}