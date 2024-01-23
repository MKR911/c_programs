#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char month[12][20] = {"jan","feb","mar","april","may","june","july","aug","sept","oct","nov","dec"};
    char week[7][20] = {"mon","tue","wed","thru","fri","sat","sun"};
    char again = 'Y';
    int m,day;

    while(again == 'Y' || again == 'y'){
        printf("please select your month: \n");
        for(int i = 0; i<12;i++){
            printf("for %s press %d\n",month[i],i);
        }

        printf("Enter your month number: ");
        scanf("%d",&m);

        for(int i = 0; i < 7; i++){
            printf("%s\t",week[i]);
        }
        printf("\n");

        switch(m){

            case 0:
            for(int i = 0; i< 6; i++){
                printf(" \t");}
            printf("%d\n",1);
            day = 1;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 1:
            for(int i = 0; i< 2; i++){
                printf(" \t");}
            for(int i = 0; i < 5; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 6;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 29)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 29){
                break;
            }
            }
            break;

            case 2:
            for(int i = 0; i< 2; i++){
                printf(" \t");}
            for(int i = 0; i < 5; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 6;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 3:
            for(int i = 0; i< 5; i++){
                printf(" \t");}
            for(int i = 0; i < 2; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 3;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 31)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 31){
                break;
            }
            }
            break;

            case 4:
            printf("\n");
            day = 1;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 5:
            for(int i = 0; i< 3; i++){
                printf(" \t");}
            for(int i = 0; i < 4; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 5;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 31)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 31){
                break;
            }
            }
            break;

            case 6:
            for(int i = 0; i< 5; i++){
                printf(" \t");}
            for(int i = 0; i < 2; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 3;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 7:
            for(int i = 0; i< 1; i++){
                printf(" \t");}
            for(int i = 0; i < 6; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 7;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 8:
            for(int i = 0; i< 4; i++){
                printf(" \t");}
            for(int i = 0; i < 3; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 4;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 29)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 29){
                break;
            }
            }
            break;

            case 9:
            for(int i = 0; i< 6; i++){
                printf(" \t");}
            printf("%d\n",1);
            day = 1;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 32)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 32){
                break;
            }
            }
            break;

            case 10:
            for(int i = 0; i< 2; i++){
                printf(" \t");}
            for(int i = 0; i < 5; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 6;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 31)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 31){
                break;
            }
            }
            break;
            
            case 11:
            for(int i = 0; i< 4; i++){
                printf(" \t");}
            for(int i = 0; i < 3; i++){
                printf("%d\t",i + 1);
            }
            printf("\n");
            day = 4;
            while(1){
            for(int i = 0; i<7; i++){
                if(day == 29)
                break;
                printf("%d\t",day);
                day = ++day;
            }
            printf("\n");
            if(day == 29){
                break;
            }
            }
            break;
            

        }

        printf("Do you want to check more: \n");
        printf("press Y for retry: ");
        scanf("%d",&again);
        printf("\n");
    }

    return 0;
}