//VIMP
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int ar[r][c];
    //inp
    printf("Enter elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    //transpose
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){//should be j>i and NOT j>r
                int temp = ar[i][j];
                ar[i][j]=ar[j][i];
                ar[j][i]=temp;
            }
        }
    }
    //printing
    printf("Transposed matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}