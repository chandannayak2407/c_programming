//Sum and average of array elements.

#include <stdio.h>

int main() {
    int n,i;
    float sum=0,avg;
    printf("Enter the range : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elment no. %d : ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Sum : %.2f\nAverage : %.2f",sum,avg);
    return 0;
}
