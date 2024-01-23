#define PI 3.14
#include<stdio.h>

int main(){
    float radius,area;
    printf("Please enter radius of circle:- ");
    scanf("%f",&radius);
    printf("Area of circle is %f", PI*radius*radius);
    return 0;
}