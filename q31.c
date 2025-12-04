//Read and display array elements.

#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elment no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
