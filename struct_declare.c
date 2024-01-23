#include <stdio.h>

struct books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
    float price;
}b[5];

int main()
{
    struct books b1 = {"work of art", "kiddo youto", "literature", 123, 2873.23};
    struct books b2 = b1; 
    printf("%s | %s | %s | %d | %f", b2.title, b2.author, b2.subject, b2.book_id, b2.price);

    for(int i=0; i<5; i++) {
        printf("\n Enter title:");
        scanf("%s", b[i].title);
        printf("\n Enter author name:");
        scanf("%s", b[i].author);
        printf("\n Enter subject:");
        scanf("%s", b[i].subject);
        printf("\n Enter book id:");
        scanf("%d", &b[i].book_id);
        printf("\n Enter book price:");
        scanf("%f", &b[i].price);
    }

    for(int i=0; i<5; i++) {
        printf("\n Title:");
        printf("%s", b[i].title);
        printf("\n Author name:");
        printf("%s", b[i].author);
        printf("\n Subject:");
        printf("%s", b[i].subject);
        printf("\n Book id:");
        printf("%d", b[i].book_id);
        printf("\n Book price:");
        printf("%f", b[i].price);
    }
    return 0;
}

