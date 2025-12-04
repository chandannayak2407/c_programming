//Search an element in an array (Linear Search).

#include <stdio.h>

int main() {
    int n,i,find,o=0;
    float sum=0,avg;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elment no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to search : ");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if(find==arr[i])
        {
            o=i+1;
            printf("\nThe position of the element is : %d",o);
            break;
        }
    }
    if(o==0)
    {
        printf("\nElement not found!");
    }
    
    return 0;
}
