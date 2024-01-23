#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Enter a nukmber:- ");
    scanf("%d",&x);
    if(x%2 == 0){
        printf("No. is even.");
    }
    else{
        printf("No. is odd.");
    }
    return 0;
}