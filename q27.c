//Fibonacci series.

#include <stdio.h>

int main() {
    int n,i=1,j=0,k;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    printf("%d  ",j);
    while(i<=n)
    {
        printf("%d  ",i);
        k=i;
        i=i+j;
        j=k;
    }
    return 0;
}
