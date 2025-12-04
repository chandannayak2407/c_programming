//Find frequency of each element in array.

#include <stdio.h>

int main() 
{
    int n,i,j,k,flag=0,count=0;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("<---Element-------Count--->\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
        }
        for(k=i-1;k>=0;k--)
        {
            if(arr[k]==arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("       %d            %d      \n",arr[i],count);
        }
        count=0;
        flag=0;
    }
    return 0;
}
