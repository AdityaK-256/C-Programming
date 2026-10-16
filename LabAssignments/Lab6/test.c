#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 0;
    int capacity = 5;
    int choice, value, position, i;
    int *temp;

    /* Initial allocation */
    arr = (int *)malloc(capacity * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while (1) {
        printf("\n========== MENU ==========\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Search an element\n");
        printf("4. Display elements\n");
        printf("5. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &value);

                /* If array is full, double capacity */
                if (size == capacity) {
                    capacity = capacity * 2;

                    temp = (int *)realloc(
                        arr, capacity * sizeof(int)
                    );

                    if (temp == NULL) {
                        printf("Memory reallocation failed.\n");
                        free(arr);
                        return 1;
                    }

                    arr = temp;

                    printf("Array capacity doubled to %d.\n",
                           capacity);
                }

                arr[size] = value;
                size++;

                printf("Element inserted successfully.\n");
                break;

            case 2:
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter element to delete: ");
                scanf("%d", &value);

                position = -1;

                /* Search for element */
                for (i = 0; i < size; i++) {
                    if (arr[i] == value) {
                        position = i;
                        break;
                    }
                }

                if (position == -1) {
                    printf("Element not found.\n");
                } else {
                    /* Shift elements to left */
                    for (i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }

                    size--;

                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter element to search: ");
                scanf("%d", &value);

                position = -1;

                for (i = 0; i < size; i++) {
                    if (arr[i] == value) {
                        position = i;
                        break;
                    }
                }

                if (position == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at position %d.\n",
                           position + 1);

                break;

            case 4:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements:\n");

                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }

                    printf("\n");
                    printf("Size = %d, Capacity = %d\n",
                           size, capacity);
                }
                break;

            case 5:
                free(arr);
                printf("Memory released. Program ended.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

