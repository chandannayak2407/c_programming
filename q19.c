//Print numbers from 1 to n.

#include <stdio.h>

int main() {
    int i=1,n;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}
