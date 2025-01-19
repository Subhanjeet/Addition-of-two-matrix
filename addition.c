#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("Enter element of first matrix \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter element [%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter element of second matrix \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter element [%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Resultan matrix after addition \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}