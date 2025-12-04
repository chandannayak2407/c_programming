//Sum of digits of a number.

#include <stdio.h>

int main() {
    int n,sum=0,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}
