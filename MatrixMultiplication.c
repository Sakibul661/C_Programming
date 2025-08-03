#include <stdio.h>
int main()
{
    int a[3][3], b[3][2];
    int res[3][2] = {0}; // After matrix multiplication, base will be [3][2]

    printf("Enter elements for Matrix A (3x3):\n"); // Input for Matrix a(3x3)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements for Matrix b (3x2):\n"); // Input for Matrix b(3x2)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix Multiplication Is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
