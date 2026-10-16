#include <stdio.h>

int main() {
    int n, i;
    int hours;
    char type;
    int fee = 0;
    int total_vehicles = 0;
    int total_revenue = 0;
    float avg_fee = 0.0;
    
    // Tracking max fee details
    int max_fee = -1;
    char max_type = ' ';
    int max_hours = 0;

    printf("Enter the number of vehicles: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of vehicles.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("\n--- Vehicle %d ---\n", i);
        
        printf("Enter vehicle type (C for Car, B for Bike, T for Truck): ");
        scanf(" %c", &type);

        // Input validation
        if (type != 'C' && type != 'c' && 
            type != 'B' && type != 'b' && 
            type != 'T' && type != 't') {
            printf("Error: Invalid vehicle type! Skipping this vehicle.\n");
            continue;
        }

        printf("Enter parking hours: ");
        if (scanf("%d", &hours) != 1 || hours < 0) {
            printf("Error: Invalid hours! Skipping this vehicle.\n");
            continue;
        }

        // Calculate fee based on type
        if (type == 'C' || type == 'c') {
            fee = hours * 20;
        } else if (type == 'B' || type == 'b') {
            fee = hours * 10;
        } else if (type == 'T' || type == 't') {
            fee = hours * 50;
        }

        // Add penalty if hours exceed 24
        if (hours > 24) {
            fee += 200;
        }

        // Update totals
        total_vehicles++;
        total_revenue += fee;

        // Track maximum fee vehicle
        if (fee > max_fee) {
            max_fee = fee;
            max_type = type;
            max_hours = hours;
        }

        // Display per-vehicle details using ternary operator for status
        printf("Type: %c | Hours: %d | Fee: ₹%d | Status: %s\n", 
               type, hours, fee, (hours <= 5) ? "Short Stay" : "Long Stay");
    }

    // Display final summary
    printf("\n==============================\n");
    printf("        PARKING SUMMARY       \n");
    printf("==============================\n");
    printf("Total vehicles processed : %d\n", total_vehicles);
    printf("Total revenue collected  : ₹%d\n", total_revenue);
    
    if (total_vehicles > 0) {
        avg_fee = (float)total_revenue / total_vehicles;
        printf("Average fee per vehicle  : ₹%.2f\n", avg_fee);
        printf("Highest-paying vehicle   : Type %c with %d hours (Fee: ₹%d)\n", 
               max_type, max_hours, max_fee);
    } else {
        printf("No valid vehicles were processed.\n");
    }

    return 0;
}
