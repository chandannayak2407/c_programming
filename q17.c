//Grade system using if-else ladder.

#include <stdio.h>
#include <math.h>

int main() {
    int per;
    printf("Enter the percentage : ");
    scanf("%d",&per);
    if(per==100)
    {
        printf("Grade : O");
    }
    else if(per<100 && per>=90)
    {
        printf("Grade : A+");
    }
    else if(per<90 && per>=80)
    {
        printf("Grade : A");
    }
    else if(per<80 && per>=70)
    {
        printf("Grade : B+");
    }
    else if(per<70 && per>=60)
    {
        printf("Grade : B");
    }
    else if(per<60 && per>=50)
    {
        printf("Grade : C+");
    }
    else if(per<50 && per>=40)
    {
        printf("Grade : C");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
