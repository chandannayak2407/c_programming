//Check if a number is divisible by 5 and 11.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num<55)
    {
        printf("\n%d is not divisible by 5 & 11.",num);
    }
    else
    {
        if(num%5==0 && num%11==0)
        {
            printf("%d is divisible by 5 & 11.",num);
        }
        else
        {
            printf("\n%d is not divisible by 5 & 11.",num);
        }
    }
    return 0;
}
