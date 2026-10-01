#include <stdio.h>
int main(){
    int n;
    printf("Input Number: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            int temp=1;
            for(int k=1;k<=i;k++)
                temp = temp*k;
            printf("%d",temp);
        }
        printf("\n");
    }
    return 0;
}