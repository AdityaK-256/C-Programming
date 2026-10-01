#include <stdio.h>

int main() {
    int x=-1;
    // Write C code here
    switch(x > 10)
{
    case 1:
        printf("Greater than 10");
        break;

    case 0:
        printf("10 or less");
        break;
}

    return 0;
}