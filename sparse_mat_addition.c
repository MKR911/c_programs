#include <stdio.h>

int main()
{
    int r3077, c3077, n3077;

    printf("Enter r and c for matrix 1: ");
    scanf("%d%d",&r3077,&c3077);
    printf("Enter non-zero elements: ");
    scanf("%d",&n3077);
    
    int sp13077[n3077+1][3];

    sp13077[0][0]=r3077;
    sp13077[0][1]=c3077;
    sp13077[0][2]=n3077;

    
    printf("Enter row,col and value: ");

    for (int i = 1; i <= n3077; i++)
    {
        scanf("%d%d%d",&sp13077[i][0], &sp13077[i][1], &sp13077[i][2]);
    }

    printf("Enter r and c for matrix 2: ");
    scanf("%d%d",&r3077,&c3077);
    printf("Enter non-zero elements: ");
    scanf("%d",&n3077);
    
    int sp23077[n3077+1][3];

    sp23077[0][0]=r3077;
    sp23077[0][1]=c3077;
    sp23077[0][2]=n3077;

    
    printf("Enter row,col and value: ");

    for (int i = 1; i <= n3077; i++)
    {
        scanf("%d%d%d",&sp23077[i][0], &sp23077[i][1], &sp23077[i][2]);
    }

    if (sp13077[0][0] != sp23077[0][0] || sp13077[0][1] != sp23077[0][1])
    {
        printf("Invalid matrix size ");
        return 0;
    }

    int sp33077[n3077+1][3],k1, k2, k3;
    
    int tot1 = sp13077[0][2], tot2 = sp23077[0][2];
    k1 = k2 = k3 = 1;
    while ( k1 <= tot1 && k2 <= tot2) {
        if ( sp13077[k1][0] < sp23077[k2][0] ) {
            sp33077[k3][0] = sp13077[k1][0];
            sp33077[k3][1] = sp13077[k1][1];
            sp33077[k3][2] = sp13077[k1][2];
            k3++; k1++;
        }

        else if( sp13077[k1][0] > sp23077[k2][0] ) {
            sp33077[k3][0] = sp23077[k2][0];
            sp33077[k3][1] = sp23077[k2][1];
            sp33077[k3][2] = sp23077[k2][2];
            k3++; k2++;
        }

        else if ( sp13077[k1][1] < sp23077[k2][1] ) {
            sp33077[k3][0] = sp13077[k1][0];
            sp33077[k3][1] = sp13077[k1][1];
            sp33077[k3][2] = sp13077[k1][2];
            k3++; k1++;
        }

        else if( sp13077[k1][1] > sp23077[k2][1] ) {
            sp33077[k3][0] = sp23077[k2][0];
            sp33077[k3][1] = sp23077[k2][1];
            sp33077[k3][2] = sp23077[k2][2];
            k3++; k2++;
        }

        else 
        {
            sp33077[k3][0] = sp23077[k2][0];
            sp33077[k3][1] = sp23077[k2][1];
            sp33077[k3][2] = sp13077[k1][2] + sp23077[k2][2];
            k3++;k2++;k1++;
        }
    }

    while (k1 <= tot1) {
        sp33077[k3][0] = sp13077[k1][0];
        sp33077[k3][1] = sp13077[k1][1];
        sp33077[k3][2] = sp13077[k1][2];
        k3++;k1++;
    }
    while (k2 <= tot2) {
        sp33077[k3][0] = sp23077[k2][0];
        sp33077[k3][1] = sp23077[k2][1];
        sp33077[k3][2] = sp23077[k2][2];
        k3++;k2++;
    }

    sp33077[0][0] = sp13077[0][0];
    sp33077[0][1] = sp13077[0][1];
    sp33077[0][2] = k3-1;


    for (int i = 0; i <= k3 - 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",sp33077[i][j]);
        }
        printf("\n");
    }
    return 0;
}
