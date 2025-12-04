//Reverse an array.

#include <stdio.h>

int main() 
{
    int n,temp,i,j,k;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n],p=n;
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[p-1];
        arr[p-1]=temp;
        p=p-1;
    }
    printf("\n<------Reverse Array------>\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
