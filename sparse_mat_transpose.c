#include <stdio.h>

int main()
{
    int rows3077;
    printf("Enter no. of rows: ");
    scanf("%d",&rows3077);
    int smat3077[rows3077][3];

    printf("Enter sparse matrix in 3-tuple format: \n");
    for (int i = 0; i < rows3077; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &smat3077[i][j]);
        }
    }

    int tsmat3077[rows3077][3], k = 1;

    tsmat3077[0][0] = smat3077[0][1];
    tsmat3077[0][1] = smat3077[0][0];
    tsmat3077[0][2] = smat3077[0][2];

    for (int i = 0; i < smat3077[0][1]; i++)
    {
        for (int j = 1; j <= smat3077[0][2]; j++)
        {
            if (smat3077[j][1] == i)
            {
                tsmat3077[k][0] = smat3077[j][1];
                tsmat3077[k][1] = smat3077[j][0];
                tsmat3077[k][2] = smat3077[j][2];
                k++;
            }
            
        }
        
    }

    printf("Transpose sparse matrix in 3-tuple format: \n");
    for (int i = 0; i < rows3077; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", tsmat3077[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// #include <stdio.h>

// struct sparse{
// int col;
// int row;
// int value;
// };

// int main()
// {
//     int row3077, k;
//     printf("Enter no. of items in sparese matrix:");
//     scanf("%d",&row3077);

//     struct sparse a3077[row3077], b3077[row3077];

//     printf("Enter sparse matrix in 3-tuple format: \n");
//     for (int i = 0; i < row3077; i++)
//     {
//         scanf("%d%d%d", &a3077[i].row, &a3077[i].col, &a3077[i].value);
//     }

//     int row_terms[20], start_pos[20];
    
//     b3077[0].row = a3077[0].col;
//     b3077[0].col = a3077[0].row;
//     b3077[0].value = a3077[0].value;

//     if (a3077[0].value)
//     {
//         for (int i = 0; i < a3077[0].col; i++)
//         {
//             row_terms[i] = 0;
//         }

//         for (int i = 1; i <= a3077[0].value; i++)
//         {
//             row_terms[a3077[i].col]++;
//         }
//         start_pos[0] = 1;
//         for (int i = 1; i < a3077[0].col; i++)
//         {
//             start_pos[i] = start_pos[i - 1] + row_terms[i - 1];
//         }
        
//         for (int i=1; i <= a3077[0].value; i++) {
//             k = start_pos[a3077[i].col]++;
//             b3077[k].row = a3077[i].col;
//             b3077[k].col = a3077[i].row;
//             b3077[k].value = a3077[i].value;
        
//         }
//     }
//     printf("Transpose sparse matrix in 3-tuple format: \n");
//     for (int i = 0; i < row3077; i++)
//     {
//         printf("%d %d %d", b3077[i].row, b3077[i].col, b3077[i].value);
//         printf("\n");
//     }

//     return 0;
// }
