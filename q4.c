//Convert Celsius to Fahrenheit.

#include <stdio.h>
#include <math.h>

int main() {
    float c,f;
    printf("-----Celsius to Fahrenheit-----\nEnter the Celsius : ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The Fahrenheit is : %.2f\n",f);
    return 0;
}
