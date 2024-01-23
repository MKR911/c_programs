#include<stdio.h>

int main () {
    int i ,j ,n ;  //three variables are assigned with data type int.
    printf("enter number of rows of * : "); 
    scanf("%d", &n);

    for(i=1; i<=n; i++){     //row
        for(j=1;j<=i ; j++){   //column
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}