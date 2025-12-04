//Check whether a number is positive, negative, or zero.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive");
    }
    else if(num<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
