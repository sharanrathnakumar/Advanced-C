/*
Name: Sharan Rathnakumar
Date: 12th December 2022
Description: WAP to perform variance calculation with dynamic arrays
Input:  Enter array size : 7
        Enter Array elements : 4 2 7 1 5 3 6
Output: The Variance is : 4.000000
*/

#include<stdio.h>
#include<stdlib.h>

float variance(int *, int);
int main()
{
    int size,*arr;                          //Declaraing variables
    float vari;
    printf("Enter size of array :");
    scanf("%d",&size);                          //Stores user input to size variable
    arr=(int *)malloc(size);                    //Dynamice memory allocation to pointer arr
    printf("Enter array elements: ");
    vari=variance(arr,size);
    printf("Variance is %f\n",vari);            //Print output
    if(arr)
    {
        free(arr);
    }

}

float variance(int *arr, int size)
{

    float mean=0,sum=0,temp;                    //Initialising
    int i;

    for(i=0;i<size;i++)                         //Iterating loop size times
    {
        scanf("%d",&arr[i]);                    //Reading user input to arr array
        mean+=arr[i];                           //Finding sum of input and storing in mean
    }
    mean/=size;                                 //Finding the mean of input
    for(i=0;i<size;i++)                         //Iterating the loop
    {
        temp=arr[i]-mean;                       //Finding D value: Value - mean
        temp*=temp;                             //Finding square of D value
        sum+=temp;                              //Finding Sum of D square values
    }

    return sum/=size;                                   //Finding Variance: Variance is sum of D square values / size
}
