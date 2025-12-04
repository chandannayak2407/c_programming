//Count even and odd elements in an array.

#include <stdio.h>

int main() 
{
    int n,i,even=0,odd=0;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("Even : %d\nOdd : %d",even,odd);
    
    return 0;
}
