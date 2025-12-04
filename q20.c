//Print sum of first n natural numbers.

#include <stdio.h>

int main() {
    int i=1,n,sum=0;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of first n natural number is : %d",sum);
    return 0;
}
