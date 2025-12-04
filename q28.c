//Print prime numbers between two limits.

#include <stdio.h>

int main() {
    int n1,n2,i,j,k;
    printf("Enter the starting range : ");
    scanf("%d",&n1);
    printf("Enter the ending range : ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i==2)
        {
            printf("%d ",i);
        }
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
            else
            {
                k=1;
            }
        }
        if(k==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
