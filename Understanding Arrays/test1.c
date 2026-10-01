#include <stdio.h>
#include<stdlib.h>
int main()
{
int arr[10];
int key, size;
printf("Enter size of array");
scanf("%d", &size);
printf("Enter array elements");
for(int i=0;i<size;i++)
scanf("%d", &arr[i]);
printf("Enter element to be searched");
scanf("%d", &key);
// This loop searches the key in the array
for(int i=0;i<size;i++)
{
if(arr[i]==key)
{
printf("elements exists");
exit(0);
}
}
printf("element does not exist");
return 0;
}