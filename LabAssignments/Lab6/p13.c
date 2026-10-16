#include <stdio.h>
#include <stdlib.h>
int main(){
    int ar[9][9];
    printf("Enter elements: \n");
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    //row sum
    for(int i = 0;i<9;i++){
        for(int k = 1;k<=9;k++){
            int flag=0;
            for(int j = 0;j<9;j++){
                if(ar[i][j]==k){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("C1Invalid soduku.");
                exit(0);
            }
        }
    }
    //column sum
    for(int i = 0;i<9;i++){
        for(int k = 1;k<=9;k++){
            int flag=0;
            for(int j = 0;j<9;j++){
                if(ar[j][i]==k){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("C2Invalid soduku.");
                exit(0);
            }
        }
    }
    //initialising
    int hz[9][3];
    for(int i = 0;i<9;i++){
        for(int j = 0;j<3;j++){
            hz[i][j]=0;
        }
    }

    int hzCol=0;
    for(int a = 0;a<9;a=a+3){//row adder//3
        for(int i = 0+a;i<3+a;i++){//3
            for(int b = 0; b<9;b=b+3){//column adder//3
                for(int j = 0+b;j<3+b;j++){//3
                    hz[i][hzCol]+=ar[i][j];
                }
                hzCol++;
            }
            hzCol=0;
        }
    }
    
    for(int i = 0;i<9;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",hz[i][j]);
        }
        printf("\n");
    }

    int s = 0;
    for(int i = 1;i<10;i++){
        s+=i;
    }

    int count = 0,sum=0,flag1=1;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<9;j++){
            if(count<=3){
                sum = sum+hz[j][i];
            }
            else{
                if(sum!=s){
                    printf("C3Invalid Soduku!");
                    exit(0);
                }
                count =0;
                sum=0;
            }
            count++;
        }
    }
    printf("Valid Soduku");
}