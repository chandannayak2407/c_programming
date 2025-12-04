//Copy elements of one array to another.

#include <stdio.h>

int main() 
{
    int n,i,even=0,odd=0;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr2[i]);
    }
    return 0;
}
