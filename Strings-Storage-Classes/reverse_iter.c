/*
Name: Sharan Rathnakumar
Date: 17th November 2022
Description: WAP to reverse the given string using iterative method
Input: Enter a string : Hello World
Output: Reverse string is : dlroW olleH
 */
#include <stdio.h>

void reverse_iterative(char str[]);     //Function declaration
void reverse_iterative(char str[])      //Function definiton
{
    int len,i=0,j;                      //Declaring variables
    char swap;

    while(str[i++]!='\0')                       //Finding character count
    {
        len++;
    }

    j=len-1;                                    //Assigning j as length - 1
    for(i=0;i<j;i++)                            //Iterating the charatcer loop
    {
        swap=str[i];                            //Storing first index value to swap variable
        str[i]=str[j];                          //Swaping first and last index value
        str[j]=swap;                            //Swapping first and last value
        j--;                                    //Decrementing j value
    }

}

int main()
{
    char str[30];                               //Declaring character array

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    reverse_iterative(str);                     //Function call

    printf("Reversed string is %s\n", str);
}
