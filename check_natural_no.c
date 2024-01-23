#include<stdio.h>

int main(){
    int num1;
    printf("Enter number :  ");
    scanf("%d",&num1);

    if(num1 > 0){
        printf("Number entered is a positive integer which means number is a NATURAL NUMBER.");
    }
    else if(num1 == 0){
        printf("Number is '0'.");
    }
    else{
        printf("Number is a negative integer.");
    }

    return 0;
}