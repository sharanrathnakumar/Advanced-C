/*
Name: Sharan Rathnakumar
Date: 1st january 2023
Description: WAP to implement fragments using Array of Pointer
Input:Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

Output:
After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
*/

#include <stdio.h> //Header file for standard input output function
#include<stdlib.h>

int fragments(int, float *[],int *); //Prototype is used

int main() //Data type int is used with main() function
{

    int num;int i,j; //To declare variables

    printf("Enter no.of rows : "); //To print Enter no of rows
    scanf("%d",&num); //To read variable num from user

    float *row[num];  //To declare row and col
    int col[num];


    for( i=0;i<num;i++)
    {
        printf("Enter no of columns in row[%d]: ",i); //To print Enter no of columns in row
        scanf("%d",&col[i]); //To read col from user


        row[i]=malloc(( col[i]+1)*sizeof(int)); ////synamic memory allocation with col + 1 to store avg

    }


    for( i=0;i<num;i++) //To entering values
    {
        printf("Enter %d values for row[%d]: ",col[i] ,i ); //To Enter values for row

        for( j=0;j<col[i];j++)
        {

            scanf("%f",&row[i][j]); //To read values
        }
    }


    fragments( num,row,col); //To call function

    printf("After sorting output is :\n"); //To print output
    for(i=0;i<num;i++)
    {
        for(j=0;j<=col[i];j++)
        {
            printf("%f ",row[i][j]);
        }
        printf("\n"); //To print next line
    }


}

int fragments( int num, float *row[num],int *col ) //To define function
{

    int i,j;int k;float sum; //To declare varibles
    float *temp;

    for(i=0; i<num; i++)
    {
        sum = 0;
        for(j=0; j<col[i]; j++)
        {

            sum += row[i][j];  //To find outing sum values
        }

        row[i][j]=sum/(col[i]); //To storing avg
    }


    printf("Before sorting output is :\n"); //To print Before sorting output
    for(i=0;i<num;i++)
    {
        for(j=0;j<=col[i];j++)
        {

            printf("%f ",row[i][j]); //To print values
        }
        printf("\n"); //To print next line
    }



    for(i=0;i<num-1;i++)  //To swap using bubble sort
    {
        for(j=0;j<num-1-i;j++)
        {
            if(row[j][col[j]] > row[j+1][col[j+1]])
            {
                temp = row[j];
                row[j] = row[j+1];
                row[j+1] = temp;

                k=col[j];
                col[j]=col[j+1];
                col[j+1]=k;
            }
        }
    }


}
