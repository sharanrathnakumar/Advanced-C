/*
Name: Sharan Rathnakumar
Date: 25th November 2022
Description: Squeeze the character in s1 that matches any character in the string s2
Sample I/P: Enter s1: Dennis Ritchie
	        Enter s2: Linux
Sample O/P: After squeeze s1: Des Rtche
*/


#include<stdio.h>
#include<stdio_ext.h>
void squeeze(char*, char*);		                //function prototype

int main()				                        //main function
{
    char str1[30], str2[30];	            	//character strings
    printf("Enter string1:");		            //print statement
    scanf("%[^\n]", str1);		                //read input from user
    __fpurge(stdin);

    printf("Enter string2:");
    scanf("%[^\n]", str2);

    squeeze(str1, str2);		                //function call
    printf("After squeeze s1 : %s\n", str1);
}

void squeeze( char *str1, char *str2)		    //function definition
{
    int i, j;					                //integer variables
    char temp;					                //character variable
    while ( *str2 )				                //accessing the string2
    {
	    temp = *str2;				            //taking string2 to temp
	    j=0;					                //for every string2 j=0
	    while ( *(str1+j) != 0 )		            //accessing the string1
	    {
	        if ( *(str1+j) == temp )		        //if string1 value is equal to temp
	        {
		        i = j;				                //replace the value
		        while ( *(str1+i) != '\0' )
		        {
		            *(str1+i) = *(str1+i+1);
		            i++;
		        }
		        if ( *(str1+j) == temp)			    //if next character found is same continue
		            continue;
		        else
		        j++;
	        }
	        j++;
	    }
	*str2++;
    }
}
