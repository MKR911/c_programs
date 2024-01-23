// #include<stdio.h>
// #include<math.h>

// float a[50], b[50], c[50], d[50];
// int main() {
// int i;
// int deg1,deg2,deg3;
// int k=0,l=0,m=0;
// printf("Enter the highest degree of polynomial1: ");
// scanf("%d", &deg1);
// for(i=0; i<=deg1; i++) {
//     printf("\nEnter the coeff of x^%d :", i);
//     scanf("%f", &a[i]);
// }
// printf("\nEnter the highest degree of polynomial2: ");
// scanf("%d", &deg2);
// for(i=0; i<=deg2; i++) {
//     printf("\nEnter the coeff of x^%d : ", i);
//     scanf("%f", &b[i]);
// }
// printf("\nPolynomial 1 = %.1f", a[0]);
// for(i=1; i<=deg1; i++)
//     printf("+ %.1fx^%d", a[i], i);
// printf("\nPolynomial 2 = %.1f", b[0]);
// for(i=1; i<=deg2; i++)
//     printf("+ %.1fx^%d", b[i], i);
//     deg3 = deg1+deg2;
// for (int i = 0; i<=deg3; i++)
//     c[i] = 0;
// for (int i=0; i<=deg1; i++) {
//     for (int j=0; j<=deg2; j++)
//     c[i+j] += a[i] * b[j];
// }
// printf("\nPolynomial after multiplication = %.1f", c[0]);
// for(i=1; i<=deg3; i++)
//     printf("+ %.1fx^%d", c[i], i);

// return 0;

// }

#include <stdio.h>
#include <math.h>
struct poly
{
    float coeff;
    int exp;
};
struct poly a[50], b[50], c[50], d[50];
int main()
{
    int nterm1, nterm2, nterm3;
    int i, j, k, l = 0, m = 0;
    float prod;
    printf("Enter the number of non-zero terms in Polynomial1: ");
    scanf("%d", &nterm1);
    for (i = 0; i < nterm1; i++)
    {
        printf("\nEnter the coeff of %d th term: ", i);
        scanf("%f", &a[i].coeff);
        printf("\nEnter the exp of %d th term: ", i);
        scanf("%f", &a[i].exp);
    }
    printf("\nEnter the number of non-zero terms in Polynomial2: ");
    scanf("%d", &nterm2);
    for (i = 0; i < nterm2; i++)
    {
        printf("\nEnter the coeff of %d th term: ", i);
        scanf("%f", &b[i].coeff);
        printf("\nEnter the exp of %d th term: ", i);
        scanf("%f", &b[i].exp);
    }
    printf("\nPolynomial 1 = %.1fx^%d", a[0].coeff,a[0].exp);
    for (i = 1; i < nterm1; i++)
        printf("+ %.1fx^%d", a[i].coeff, a[i].exp);
    printf("\nPolynomial 2 = %.1fx^%d", b[0].coeff, b[0].exp);
    for (i = 1; i < nterm2; i++)
        printf("+ %.1fx^%d", b[i].coeff, b[i].exp);
    for (int i = 0; i < nterm1; i++)
    {
        for (int j = 0; j < nterm2; j++)
        {
            prod = a[i].coeff * b[j].coeff;
            for (int k = 0; k < m; k++)
            {
                if (a[i].exp + b[j].exp == c[k].exp)
                {
                    c[k].coeff += prod;
                    break;
                }
            }
            c[m].exp = a[i].exp + b[j].exp;
            c[m++].coeff = prod;
        }
    }
    nterm3 = m - 1;
    printf("\nPolynomial after multiplication = %.1f", c[0].coeff);
    for (i = 1; i < nterm3; i++)
        printf("+ %.1fx^%d", c[i].coeff, c[i].exp);
    return 0;
}