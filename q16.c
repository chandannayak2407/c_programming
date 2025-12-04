//Basic calculator using switch-case.

#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2,c;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("1 for (+)\n2 for (-)\n3 for (*)\n4 for (/)\n5 for (%)\nEnter the case between 1 to 5 : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1 : 
        printf("%d",num1+num2);
        break;
        case 2 : 
        printf("%d",num1-num2);
        break;
        case 3 : 
        printf("%d",num1*num2);
        break;
        case 4 : 
        printf("%d",num1/num2);
        break;
        case 5 : 
        printf("%d",num1%num2);
        break;
        default : 
        printf("Enter the range between 1 to 5.");
        break;
    }
    
    return 0;
}
