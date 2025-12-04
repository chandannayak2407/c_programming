//Swap two numbers:Using a third variable & Without using a third variable.

#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2,num3;
    printf("-----Swap two numbers-----\nEnter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("The swap of two numbers using a third variable is : %d & %d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nThe swap of two numbers without using a third variable is : %d & %d",num1,num2);
    return 0;
}
