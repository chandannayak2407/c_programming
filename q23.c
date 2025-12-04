//Count digits in a number.

#include <stdio.h>

int main() {
    int n,count=0,temp;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count+=1;
    }
    printf("The number of digits are : %d",count);
    return 0;
}
