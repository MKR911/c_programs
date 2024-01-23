#include <stdio.h>
int main(){
    int day;      // mon- 1, tue- 2, wed- 3, .....
    printf("enter day (1-7) : ");
    scanf("%d", &day);

    switch (day){
        case 1 : printf("MONDAY");
                 break;
        case 2 : printf("TUESDAY");
                 break;
        case 3 : printf("WEDNESDAY");
                 break;
        case 4 : printf("THRUSDAY");
                 break;
        case 5 : printf("FRIDAY");
                 break;
        case 6 : printf("SATURDAY");
                 break;
        case 7 : printf("SUNDAY");
                 break;
        case 8 : printf("YOU ENTERED THE WRONG NUMBER!!!");
                 break;
    }
}