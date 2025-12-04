//Factorial of a number.

#include <stdio.h>

int main() {
    int i=1,n,mul=1;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    while(i<=n)
    {
        mul=mul*i;
        i++;
    }
    printf("The factorial is : %d",mul);
    return 0;
}
