#include <stdio.h>
/*
we are going to find the area of square 
first we will take the value from user,
then we will find the area and at last print it.
*/
int main(){
    float side,area;    //type decleration
    printf("Please enter side of square:- ");
    scanf("%f",&side);   //value input
    printf("Area of square is %f",side * side);   // printing result
    return 0;
}