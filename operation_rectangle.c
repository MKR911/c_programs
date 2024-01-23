#include <stdio.h>

int main(){
    int l,b,n;
    printf("enter length of rectangle : ");
    scanf("%d", &l);
    printf("enter breadth of rectangle : ");
    scanf("%d", &b);

    printf("enter your choice  1. parameter  2. area :");
    scanf("%d", &n);

    /*if(n == 1){
        printf("parameter of rectangle is : %d", 2*(l+b));
    }
    else{
        printf("area of rectangle is : %d", l*b);
    }*/

    n == 1?printf("parameter of rectangle is : %d", 2*(l+b)):printf("area of rectangle is : %d", l*b);
    return 0;
}