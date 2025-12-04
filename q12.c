//Find the largest of three numbers.

#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2,num3;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("Enter the 3rd number : ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
    {
        printf("Latgest : %d",num1);
    }
    else if(num1<num2 && num2>num3)
    {
        printf("Latgest : %d",num2);
    }
    else if(num1==num2 && num1==num3)
    {
        printf("All values are equal");
    }
    else if(num1==num2)
    {
        if(num1>num3)
        {
            printf("Latgest : %d (Number 1 & Number 2 is equal)",num1);
        }
        else
        {
            printf("Latgest : %d",num3);
        }
    }
    else if(num2==num3)
    {
       if(num1<num2)
        {
            printf("Latgest : %d (Number 2 & Number 3 is equal)",num2);
        }
        else
        {
            printf("Latgest : %d",num1);
        }
    }
    else if(num1==num3)
    {
       if(num1>num2)
        {
            printf("Latgest : %d (Number 1 & Number 3 is equal)",num1);
        }
        else
        {
            printf("Latgest : %d",num2);
        }
    }
    else
    {
        printf("Largest : %d",num3);
    }
    return 0;
}
