/*
Hacker Rank Problem

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output

5
9
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array_count, queries;

    printf("Enter the number of arrays and number of queries : ");
    scanf("%d %d", &array_count, &queries);

    int *array[array_count];
    int array_size;
    for( int i =0; i < array_count; i++)
    {
        scanf("%d",&array_size);
        array[i] = (int *) malloc(sizeof(int) * array_size);
        for(int j =0; j < array_size; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int row, col;

    for(int k =0; k < queries; k++)
    {
        scanf("%d %d", &row, &col);
        printf("%d ", array[row][col]);
    }
}
