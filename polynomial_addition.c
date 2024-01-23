// #include <stdio.h>

// struct polynomial
// {
//     float coeff;
//     int exp;
// };

// int main()
// {
//     struct polynomial a[20], b[20], c[20];
//     int s13077, s23077;
//     int k = 0, l = 0, m = 0;

//     printf("\nEnter the number of non-zero terms of polynomial 1: ");
//     scanf("%d",&s13077);

//     for(int i = 0; i < s13077; i++)
//     {
//         printf("\nEnter the coeff of term %d: ", i);
//         scanf("%f", &a[i].coeff);
//         printf("\nEnter the exp of term %d: ", i);
//         scanf("%d", &a[i].exp);
//     }
    

//     printf("\nEnter the number of non-zero terms of polynomial 2: ");
//     scanf("%d",&s23077);

//     for(int i = 0; i < s23077; i++)
//     {
//         printf("\nEnter the coeff of term %d: ", i);
//         scanf("%f", &b[i].coeff);
//         printf("\nEnter the exp of term %d: ", i);
//         scanf("%d", &b[i].exp);
//     }

//     printf("\nPolynomial 1 = %.1fx^%d", a[0].coeff, a[0].exp);
//     for(int i=1; i<s13077; i++){

//         printf("+ %.1fx^%d", a[i].coeff, a[i].exp);
//     }

//     printf("\nPolynomial 2 = %.1fx^%d", b[0].coeff, b[0].exp);
//     for(int i=1; i<s23077; i++){

//         printf("+ %.1fx^%d", b[i].coeff, b[i].exp);
//     }

//     while (k < s13077 && l < s23077)
//     {
//         if (a[k].exp < b[l].exp)
//         {
//             c[m].coeff = a[k].coeff;
//             c[m].exp = a[k].exp;
//             k++;
//             m++;
//         }

//         else if (a[k].exp > b[l].exp)
//         {
//             c[m].coeff = b[l].coeff;
//             c[m].exp = b[l].exp;
//             l++;
//             m++;
//         }

//         else
//         {
//             c[m].coeff = a[k].coeff + b[l].coeff;
//             c[m].exp = a[k].exp;
//             k++;
//             l++;
//             m++;
//         }
//     }

//     while (k < s13077)
//     {
//         c[m].coeff = a[k].coeff;
//         c[m].exp = a[k].exp;
//         k++;
//         m++;
//     }

//     while (l < s23077)
//     {
//         c[m].coeff = b[l].coeff;
//         c[m].exp = b[l].exp;
//         l++;
//         m++;
//     }
    
//     printf("\npolynomial after addition = %.1fx^%d ", c[0].coeff, c[0].exp);
    
//     for(int i=1; i < m; i++){
        
//         printf("+ %.1fx^%d ", c[i].coeff, c[i].exp);
//     }
    
//     return 0;
// }




#include <stdio.h>

int main()
{
    int s3077;

    printf("Enter maximum degree of x: ");
    scanf("%d", &s3077);

    int poly1[s3077+1], poly2[s3077+1], poly3[s3077+1];

    printf("Enter Polynomial-1 from lowest degree to highest degree: ");

    for (int i = 0; i <= s3077; i++)
    {
        scanf("%d",&poly1[i]);
    }

    printf("Enter Polynomial-2: ");

    for (int i = 0; i <= s3077; i++)
    {
        scanf("%d",&poly2[i]);
    }

    for (int i = 0; i <= s3077; i++)
    {
        poly3[i] = poly1[i] + poly2[i];
    }

    printf("%dx^%d",poly3[s3077],s3077);
    for (int i = s3077 - 1; i >= 0; i--)
    {
        printf("+%dx^%d",poly3[i],i);
    }
    
    
    return 0;
}
