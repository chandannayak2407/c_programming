//Find maximum and minimum in an array.

#include <stdio.h>

int main() {
    int n,i,max,min;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elment no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum : %d\nMinimum : %d",max,min);
    return 0;
}
