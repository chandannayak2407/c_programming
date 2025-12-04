//Calculate area of circle, rectangle, triangle.

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    float cr,rl,rw,th,tw;
    printf("-----Circle Area Calculator-----");
    printf("\nEnter the radius of the circle : ");
    scanf("%f",&cr);
    printf("The area of circle is : %.2f\n",(PI*cr*cr));
    
    printf("\n-----Rectangle Area Calculator-----");
    printf("\nEnter the length of the rectangle : ");
    scanf("%f",&rl);
    printf("Enter the width of the rectangle : ");
    scanf("%f",&rw);
    printf("The area of rectangle is : %.2f\n",(rl*rw));
    
    printf("\n-----Triangle Area Calculator-----");
    printf("\nEnter the height of the triangle : ");
    scanf("%f",&th);
    printf("Enter the width of the triangle : ");
    scanf("%f",&tw);
    printf("The area of triangle is : %.2f\n",((tw/2)*th));
    return 0;
}
