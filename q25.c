//Check palindrome number.

#include <stdio.h>

int main() {
    int n,temp,rev=0,p;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    if(rev==p)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}
