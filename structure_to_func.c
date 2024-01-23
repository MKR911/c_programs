#include <stdio.h>
struct complex_no
{
    int real;
    int imag;
}n1,n2;
void add_complex(struct complex_no num1, struct complex_no num2);
void multi_complex(struct complex_no *num1, struct complex_no *num2);


int main()
{
    
    int choice;
    // struct complex_no n1, n2;
    printf("Enter complex number 1: ");
    scanf("%d%d", &n1.real, &n1.imag);
    printf("Enter complex number 2: ");
    scanf("%d%d", &n2.real, &n2.imag);
    printf("MENU\n1.addition\n2.multiplication\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_complex(n1,n2);
        break;
    case 2:
        multi_complex(&n1,&n2);
        break;

    default:
        printf("Invalid choice!!!");
        break;
    }
    return 0;
}
void add_complex(struct complex_no num1, struct complex_no num2)
{

    printf("Sum = %d+%di", (num1.real + num2.real), (num1.imag + num2.imag));
}
void multi_complex(struct complex_no *num1, struct complex_no *num2)
{

    printf("Multiplication = %d+%di", (num1->real * num2->real - num1->imag * num2->imag), (num1->imag * num2->real + num1->real * num2->imag));
}
