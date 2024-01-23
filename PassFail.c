#include<stdio.h>
int main(){
    int marks;
    printf("Enter number(0-100) : ");
    scanf("%d",&marks);
    if(marks >= 0 && marks <= 30){
        printf("Grade :- D \n");
    }
    else if(marks > 30 && marks <= 70){
        printf("Grade :- C \n");
    }
    else if(marks > 70 && marks <= 90){
        printf("Grade :- B \n");
    }
        else if(marks > 90 && marks <= 100){
        printf("Grade :- A \n");
    }
    else{
        printf("WRONG MARKS!!!");
    }
    return 0;
}