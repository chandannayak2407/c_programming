//Find the largest of two numbers.

#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Latgest : %d",num1);
    }
    else if(num1<num2)
    {
        printf("Latgest : %d",num2);
    }
    else
    {
        printf("Equal");
    }
    return 0;
}
