/*
Name: Sharan Rathnakumar
Date: 25th November 2022
Description: WAP to implement strtok function
Sample I/P:  Enter string : Bangalore:chennai;delhi:mumbai
	         Enter the delimeter : :;
Sample O/P: Tokens :
	        Bangalore
	        Chennai
	        delhi
	        mumbai
*/


#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);	//function prototype

int main()						                    //main function
{
    char str[50], delim[50];				        //character variable

    printf("Enter the string  : ");			        //print statement
    scanf("%s", str);					            //read input

    __fpurge(stdout);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);

    char *token = my_strtok(str, delim);		    //function call
    printf("Tokens :\n");

    while (token)				                    //if token != NULL print string
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);			    //function call with NULL as 1st argument
    }
}

char *my_strtok(char str[], const char delim[])		//function definition
{
    static int  index = 0;				            //static variable declaration
    static char *temp;
    int len = index;					            //variable declaration
    int i ;

    if (str != NULL)					            //to check string not equal to NULL
    {
	    temp = str;
    }

    while (temp[index] != '\0')				        //iteration for all characters from main string
    {
	    i = 0;
	    while( delim[i] != '\0')			        //iteration for all tokens with each character of main string
	    {
	    if( delim[i] == temp[index] )		        //check for the token
	    {
		    temp[index] = '\0';			            //assign null value to temp
		    index++;

		if(temp[len] != '\0')			            //if prev character is not '\0' then return
		{
		    return (temp+len);
		}
		else
		{
		    len = index;			                //if prev character and present character is '\0' just move to the next string
		    index--;
		    break;				
		}
	    }
	    i++;
	}
	index++;
    }
    if ( temp[len] == '\0')                         //if prev character is equal to '\0' 
    {
        return NULL;
    }
    else
    {
        return (temp+len);
    }
}
