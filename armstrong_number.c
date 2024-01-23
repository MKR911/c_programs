#include<stdio.h>
#include<math.h>

int main(){
    int i, j, x, i_num, f_num = 0, digit = 0, count = 0;
    printf("Enter the number you want to check as armstrong number :  ");
    scanf("%d",&i_num);
    i = j = i_num;

    while(i > 0){
        i /= 10;
        count++;
    }

    while(j > 0){
        digit = j % 10;
        j /= 10;
        x = pow(digit,count);
        f_num += x;
        printf("%d %d\n",x, f_num);
    }

    if(f_num == i_num){
        printf("This is an Armstrong Number.");
    }
    else{
        printf("This is not an Armstrong Number.");
    }
    return 0;
}