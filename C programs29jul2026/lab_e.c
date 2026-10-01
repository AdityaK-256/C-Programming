#include <stdio.h>
int main(){
    int n;
    printf("Enter number of vehicles: ");
    scanf("%d",&n);

    int vehNo [n],hr[n],amt[n];
    char ch [n];

    int rev,max=1;
    int amtHr,penal;
    double avg;
    for(int i = 1;i<=n;i++){
        vehNo[i-1]=i;
        printf("Enter Type of Vehicle(Capital character): ");
        scanf(" %c",&ch[i-1]);
        printf("Enter parking hour(s): ");
        scanf("%d",&hr[i-1]);
        switch(ch[i-1]){
            case 'C':
            amtHr = 20;
            break;
            case 'B':
            amtHr = 10;
            break;
            case 'T':
            amtHr = 50;
            break;//break also Imp before default
            default:
            printf("Invalid Input");
        }
        amt[i-1]=hr[i-1]*amtHr;
        if(hr[i-1]>24){
            amt[i-1]+=200;
        }
        rev+=amt[i-1];
        if(i!=1){
            if(amt[i-1]>amt[i-2])
            max=i-1;
        }
    }
    //(type, hours, fee, status)

    printf("Type\t Hours\t Fee\t Status\n");
    int invalid=0;
    for(int i = 0; i<n; i++){
        char t = ch[i];
        if(t=='C'||t=='B'||t=='T'){
            printf("%c\t%d\t%d\t%s\n",ch[i],hr[i],amt[i],(hr[i]<=5)?"Short Stay":"Long Stay");
        }
        else{
            invalid++;
        }        
    }
    avg = 1.0*rev/n;// Imp
    printf("Total vehicles processed: %d\n",(n-invalid));
    printf("Total Revenue: Rs. %d\n",rev);
    printf("Average parking fee per vehicle: Rs. %0.2lf\n",avg);
    printf("Vehicle with maximum parking fees: Vehicle %d\n",max+1);

    return 0;
}