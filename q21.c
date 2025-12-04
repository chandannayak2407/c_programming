//Table of any number.

#include <stdio.h>

int main() {
    int i=1,n,mul=1;
    printf("Enter the value of range : ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,(n*i));
        i++;
    }
    return 0;
}
