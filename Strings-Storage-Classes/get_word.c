/*
Name: Sharan Rathnakumar
Date: 25th November 2022
Description: WAP to implement getword function
Sample I/P:  Enter the string: Hello
Sample O/P:  You entered Hello and the length is 5
*/

#include <stdio.h>

int getword(char *str);			                                        //function prototype

int main()				                                                //main function
{
        int len = 0;			                                        //integer variable
	    char str[100];		                                            //character variable

		printf("Enter the string : ");	                                //print statement
		scanf(" %[^\n]", str);		                                    //read input from user
        
		len = getword(str);		                                        //function call

        printf("You entered %s and the length is %d\n", str, len);	    //print statement
	    return 0;							                            //end of execution of program
}

int getword(char *str)				                                    //function definition
{
    int length = 0;				                                        //integer variable
    while((*str != ' ') && (*str != '\0'))                              //loop to check for space and NULL in input string
    {
	    *str++;					                                        //increment string value
	    length++;				                                        //increment length value
    }
    if (*str == ' ')				                                    //condition for space in string

	*str = '\0';
    return length;				                                        //returning length value
}
