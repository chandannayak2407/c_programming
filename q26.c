//Armstrong number check.

#include <stdio.h>

int main() {
    int n,temp,sum=0,p;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum+(temp*temp*temp);
        n=n/10;
    }
    if(sum==p)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
