//Perform arithmetic operations on two inputs.

#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2,num3;
    printf("-----Arithmetic operations on two inputs-----\nEnter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("\nThe addition of both value is : %d",num1+num2);
    printf("\nThe substraction of both value is : %d",num1-num2);
    printf("\nThe multiplication of both value is : %d",num1*num2);
    printf("\nThe division of both value is : %d",num1/num2);
    printf("\nThe remainder of both value is : %d",num1%num2);
    return 0;
}
