#include <stdio.h>
#include <stdlib.h>
int main(){
//Vehicle: Sedan
//Distance: 20 km
//Base Fare = Rs.360
//Night Surcharge = Rs.50
//Total Fare = Rs.410 
    printf("1. Mini Rs.12/km\n2. Sedan Rs.18/km\n3. SUV Rs.25/km\n4. Premium Rs.35/km\n");
    printf("Enter vehicle type: ");
    int ch,dist,trTime,night=0,unit;
    
    scanf("%d",&ch);
    printf("Enter distance: ");
    scanf("%d",&dist);
    printf("Enter travel time (1-Day / 2-Night): ");
    scanf("%d",&trTime);
    if(trTime==2){
        night=50;
    }

    switch(ch){
        case 1:
        printf("Vehicle: Mini\n");
        unit = 12;
        break;
        case 2:
        printf("Vehicle: Sedan\n");
        unit=18;
        break;
        case 3:
        printf("Vehicle: SUV\n");
        unit = 25;
        break;
        case 4:
        printf("Vehicle: Prime\n");
        unit=35;
        break;
        default:
        printf("Invalid!");
        exit(0);
    }
    
    printf("Distance: %d\n",dist);
    printf("Base Fare = Rs.%d\n",unit*dist);
    printf("Night Surcharge = Rs.%d\n",night);
    printf("Total Fare = Rs.%d\n",(unit*dist)+night);
}