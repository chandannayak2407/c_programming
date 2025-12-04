//Sort array elements (Bubble Sort — Basic DSA but simple).

#include <stdio.h>

int main() 
{
    int n,i,j,temp;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
