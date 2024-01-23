#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int emp_id;
    char name[30];
    char designation[30];
    int b_salary;
    int hra;
    int da;
} Employee;

int main()
{
    int n;
    int g_salary;

    printf("Enter no.of employees: ");
    scanf("%d",&n);

    Employee employees[n];

    for(int i = 0; i < n; i++){
        printf("Enter employee %d information:\n",i+1);

        printf("emp_id: ");
        scanf("%d",&employees[i].emp_id);

        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Designation: ");
        scanf("%s",employees[i].designation);

        printf("Basic Salary: ");
        scanf("%d",&employees[i].b_salary);

        printf("HRA %% : ");
        scanf("%d",&employees[i].hra);
        getchar();

        printf("DA %%: ");
        scanf("%d",&employees[i].da);
    }

    printf("Employee Information: \n");


    for(int i = 0; i < n; i++){
        printf("emp_id: ");
        printf("%d\n",employees[i].emp_id);

        printf("Name: ");
        printf("%s\n",employees[i].name);

        printf("Designation: ");
        printf("%s",employees[i].designation);

        printf("Basic Salary: ");
        printf("%d\n",employees[i].b_salary);

        printf("HRA %%: ");
        printf("%d %%\n",employees[i].hra);

        printf("DA %%: ");
        printf("%d %%\n",employees[i].da);

        g_salary = employees[i].b_salary + (employees[i].b_salary*employees[i].hra/100) + (employees[i].b_salary*employees[i].da/100);

        printf("Gross salary: ");
        printf("%d\n",g_salary);

        printf("\n\n");
    }

    return 0;
}
