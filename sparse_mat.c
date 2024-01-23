#include <stdio.h>

int main()
{
    int n3077, m3077, size = 0, row = 0;

    printf("Enter the size of sparse matrix: ");
    scanf("%d%d", &n3077, &m3077);

    int smatrix3077[n3077][m3077];

    printf("Enter elements: ");
    for(int i = 0; i < n3077; i++){
        for(int j = 0; j < m3077; j++){
            scanf("%d", &smatrix3077[i][j]);
        }
    }

    for (int i = 0; i < n3077; i++)
    {
        for (int j = 0; j < m3077; j++)
        {
            if(smatrix3077[i][j] != 0){
                size++;
            }
        }
    }

    int sm3077[size+1][3];

    sm3077[row][0] = n3077;
    sm3077[row][1] = m3077;
    sm3077[row][2] = size;

    row++;

    for (int i = 0; i < n3077; i++)
    {
        for (int j = 0; j < m3077; j++)
        {
            if(smatrix3077[i][j] != 0){
                sm3077[row][0] = i;
                sm3077[row][1] = j;
                sm3077[row][2] = smatrix3077[i][j];
                row++;
            }
        }
    }

    printf("sparse matrix in 3-tuple format:\n");
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",sm3077[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
