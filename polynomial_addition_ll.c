#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int exp;
    int coeff;
    struct Node *next;
};


int main()
{
    struct Node *head1, *head2, *head3, *p1, *p2, *p3;
    int n1, n2, n3 = 0;

    printf("Enter no. of terms in polynomial 1: ");
    scanf("%d", &n1);

    printf("Enter the elements: \n");
    for (int i = 0; i < n1; i++)
    {
        if (i == 0)
        {
            head1 = (struct Node *)malloc(sizeof(struct Node));
            p1 = head1;
        }
        else
        {
            p1->next = (struct Node *)malloc(sizeof(struct Node));
            p1 = p1->next;
        }

        printf("Enter exponent: ");
        scanf("%d",&p1->exp);

        printf("Enter coefficient: ");
        scanf("%d",&p1->coeff);
    }
    p1->next = NULL;

    printf("Enter no. of terms in polynomial 2: ");
    scanf("%d", &n2);

    printf("Enter the elements: \n");
    for (int i = 0; i < n2; i++)
    {
        if (i == 0)
        {
            head2 = (struct Node *)malloc(sizeof(struct Node));
            p2 = head2;
        }
        else
        {
            p2->next = (struct Node *)malloc(sizeof(struct Node));
            p2 = p2->next;
        }

        printf("Enter exponent: ");
        scanf("%d",&p2->exp);

        printf("Enter coefficient: ");
        scanf("%d",&p2->coeff);
    }
    p2->next = NULL;

    p1 = head1;
    p2 = head2;

    while (p1 != NULL && p2 != NULL)
    {
        
        if(p1 == head1 && p2 == head2){
            
            head3 = (struct Node *)malloc(sizeof(struct Node));
            p3 = head3;

            if (p1->exp < p2->exp)
            {
                p3->exp = p2->exp;
                p3->coeff = p2->coeff;
                p2 = p2->next;
            }

            else if (p1->exp > p2->exp)
            {
                p3->exp = p1->exp;
                p3->coeff = p1->coeff;
                p1 = p1->next;
            }

            else
            {
                p3->exp = p2->exp;
                p3->coeff = p2->coeff + p1->coeff;
                p2 = p2->next;
                p1 = p1->next;
            }
            
        }
        else{
            
            p3->next = (struct Node *)malloc(sizeof(struct Node));
            p3 = p3->next;

            if (p1->exp < p2->exp)
            {
                p3->exp = p2->exp;
                p3->coeff = p2->coeff;
                p2 = p2->next;
            }

            else if (p1->exp > p2->exp)
            {
                p3->exp = p1->exp;
                p3->coeff = p1->coeff;
                p1 = p1->next;
            }

            else
            {
                p3->exp = p2->exp;
                p3->coeff = p2->coeff + p1->coeff;
                p2 = p2->next;
                p1 = p1->next;
            }
        }
    }

    while (p1 != NULL)
    {
        p3->next = (struct Node *)malloc(sizeof(struct Node));
        p3 = p3->next;
        p3->exp = p1->exp;
        p3->coeff = p1->coeff;
        p1 = p1->next;
    }
    
    while (p2 != NULL)
    {
        p3->next = (struct Node *)malloc(sizeof(struct Node));
        p3 = p3->next;
        p3->exp = p2->exp;
        p3->coeff = p2->coeff;
        p2 = p2->next;
    }

    p3 = head3;
    printf("Polynomial 3: %dx^%d ", p3->coeff, p3->exp);
    p3 = p3->next;
    while (p3 != NULL)
    {
        printf("+ %dx^%d ", p3->coeff, p3->exp);
        p3 = p3->next;
    }
    printf("\n");

    return 0;

}
