//Check whether a number is even or odd.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
