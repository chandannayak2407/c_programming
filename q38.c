//Merge two arrays into one.

#include <stdio.h>

int main() 
{
    int n,i,o;
    printf("Enter the range : ");
    scanf("%d",&n);
    o=n+n;
    int arr1[n],arr2[n],arr3[o];
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d of 1st array : ",i+1);
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d of 2nd array : ",i+1);
        scanf("%d",&arr2[i]);
        arr3[n+i]=arr2[i];
    }
    for(i=0;i<o;i++)
    {
        printf("%d  ",arr3[i]);
    }
    return 0;
}
