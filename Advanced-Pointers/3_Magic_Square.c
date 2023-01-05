/*
Name: Sharan Rathnakumar
Date: 1st january 2023
Description: WAP to generate a n*n magic square
Input:Enter a number: 3
Output:
8      1      6
3      5      7
4      9      2

 */

#include<stdio.h> //Header file for standard input output function
#include<stdlib.h>

void magic_square(int **,int);

int main() //Data type int is used with main function
{
    int num, i, j; //Declaring variables
    int **magic;

    printf("Enter a number: "); //To print enter a number
    scanf("%d", &num); //To read variable num from user

    if(num > 0) //To check num is greater than 0 if condition is used
    {

        if( num % 2 != 0)
        {

            magic = calloc(num, sizeof(int *));

            for(i= 0; i<num; i++) //For loop is used for iteration
            {

                magic[i] = calloc(num, sizeof(int));

            }

            magic_square(magic,num);

            for(i=0;i<num;i++)
            {

                for(j=0;j<num;j++)
                {

                    printf("%d\t",magic[i][j]);

                }

                printf("\n"); //To print next line


            }

        }

        else //Else condition is used
        {

            printf("Error : Please  enter only positive odd numbers\n"); //To print error message

        }

    }

    else
    {

        printf("Error : Please enter only positive odd numbers\n"); //To print error message

    }

    free(magic);

    return 0; //To return value 0

}

void magic_square(int **magic, int num)
{
    int j, k, i=0;
    j = num/2;

    for(k=1;k<=(num*num);k++)
    {

        magic[i][j] = k;

        if(k % num == 0)
        {

            i++;

        }

        else
        {

            if(i == 0) //If condition is used to check i equal to 0
            {

                i = num-1;

            }

            else
            {

                i--;

            }
            if(j == (num - 1))
            {
                j = 0;
            }
            else //Else condition is used
            {
                j++;
            }
        }
    }
}
