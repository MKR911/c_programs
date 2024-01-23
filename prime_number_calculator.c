#include<stdio.h>

int main()
{
    int num1, i, check = 0;
    printf("Enter the number you want to check: ");
    scanf("%d",&num1);
    /*i = num1/2;
    printf("%d \n",i);
    printf("%d \n",num1 % i);*/

    for(i=2;i < num1/2;i++){
        if(num1 % i == 0){
            check = 1;
            printf("%d %d\n",check , i);
            break;
        }
    }
    if(check == 1){
        printf("Number entered is not a prime number.");
    }
    else{
        printf("Number entered is a prime number.");
    }

    return 0;
}