/*
Name: Sharan Rathnakumar
Date: 25th November 2022
Description: WAP to reverse the given string using recursion method
Sample I/P:  Enter the string : Hello
Sample O/P:  Reverse string is: olleH
*/

#include<stdio.h>

void reverse_recursive(char str[], int i, int length);		//function prototype

int main()							                        //main function
{
    int i = 0, j = 0, length = 0;				            //integer variable
    char str[30];						                    //character variable

    printf("Enter any string : ");				            //print statement
    scanf("%[^\n]", str);					                //read input from user

    while(str[j] != '\0')					                //to find string length
    {       
	    length++;
	    j++;
    }

    //printf("length:%d\n", length);				            //print statement

    reverse_recursive(str,i,length);				        //function call

    printf("reversed string is %s\n", str);			        //print statement
}

void reverse_recursive(char str[],int i, int length)		//function definition
{
    int temp;							                    //integer variable

    temp = str[i];						                    //to reverse the string
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
    i++;

    if(i == (length/2))
    {
	    return;
    }
    reverse_recursive(str,i,length);			            //recursion
}
