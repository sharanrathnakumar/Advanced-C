/*
Name: Sharan Rathnakumar
Date: 21st November 2022
Description: WAP to implement atoi function
Input: Enter a numeric string: 12345
Output: String to integer is 12345
 */

#include <stdio.h>

int my_atoi(const char []);             //Function declaration
int my_atoi(const char arr[])           //Function Definition
{
    int num=0,i;                        //Declaring variables
    char sign;
    sign=arr[0];                        //Saving first character to sign

    if(sign == '-' || sign == '+')
    {
        for(i=1;arr[i]!='\0';i++)       //Iterating till null character
        {
            if(arr[1]<48 || arr[1]>57)  //Checking if second character is alphabet
            {
                return 0;                       //return 0
            }
            else if(arr[i]>=48 && arr[i]<=57)   //Else if the character is in range of ascii digit
            {
                num*=10;
                num=num+(arr[i]-48);            //Converting ascii value of digit to Integer by substracting with 48
            }
        }
    }
    else
    {

        for(i=0;arr[i]!='\0';i++)               //Iterating the loop till null character
        {
            if(arr[0]<48 || arr[0]>57)          //Checking whether first character is other than ascii digits
            {
                return 0;                       //Return 0
            }
            else if(arr[i]>=48 && arr[i]<=57)   //Else if in range of ascii digits
            {
                num*=10;
                num=num+(arr[i]-48);            //Convert the ascii to integer value
            }
        }
    }
    if(sign == '-')
    {
        return -num;
    }
    else
    {
        return num;
    }
}


int main()
{
    char str[20];                               //Declaring character array

    printf("Enter a numeric string : ");        //User display message
    scanf("%s", str);                           //Read the string

    printf("String to integer is %d\n",my_atoi(str));   //Prints the return value of the function
}
