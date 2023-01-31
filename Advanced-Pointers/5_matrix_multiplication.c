/*
Name: Sharan Rathnakumar
Date: 1st January 2023
Description: WAP to find the product of given matrix.
Input: Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3

Output:
Product of two matrix :
14      14      14
14      14      14
14      14      14
 */
#include <stdio.h> //Header file for standard input output function
#include <stdlib.h>

int matrix(int **, int, int, int **, int, int, int **, int, int); //Declare variables

int main()
{
    //for Variable declaration
    int **matrix_a, **matrix_b, **result, row1, col1, row2, col2, row3, col3,i,j;
    // Matrix A
    printf("Enter number of rows : ");
    scanf("%d",&row1);
    printf("Enter number of columns : ");
    scanf("%d",&col1);

    // Dynamic Memory allocation Matrix A
    matrix_a = (int**)malloc(row1 * sizeof(int));
    for (int i = 0; i < row1; i++)
        matrix_a[i] = (int*)malloc(col1 * sizeof(int));

    // Get input for Matrix A
    printf("Enter values for %d x %d matrix :",row1,col1);
    for (i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &matrix_a[i][j]); // OR ((arr+i)+j) = ++count

    // Matrix B
    printf("Enter number of rows : ");
    scanf("%d",&row2);
    printf("Enter number of columns : ");
    scanf("%d",&col2);
    if(col1 != row2)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    // Dynamic Memory allocation for Matrix B
    matrix_b = (int**)malloc(row2 * sizeof(int));
    for (int i = 0; i < row2; i++)
        matrix_b[i] = (int*)malloc(col2 * sizeof(int));

    // Get input for Matrix B
    printf("Enter values for %d x %d matrix :",row2,col2);
    for (i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &matrix_b[i][j]);

    // Dynamic Memory allocation for Result matrix
    result = (int **)malloc(row1 * sizeof(int));
    for (int i=0; i < row1; i++)
        result[i] = (int*)malloc(col2 * sizeof(int));

    // Function Call
    **result =  matrix(matrix_a, row1, col1, matrix_b, row2, col2, result, row3, col3);

    // Print the result matrix
    printf("Product of two matrix :\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

// Funcntion definition
int matrix(int **matrix_a, int row1, int col1, int **matrix_b,int row2, int col2, int **result, int row3, int col3)
{
    // Iteration for matrix multiplication
    for(int i=0; i < row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<col1; k++)
            {
                // Perform the multiplication operation
                result[i][j]+=matrix_a[i][k]*matrix_b[k][j];
            }

        }
    }
    // resturn rthe result
    return **result;
}
