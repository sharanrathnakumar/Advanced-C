/*
Name: Sharan Rathnakumar
Date: 25th November 2022
Description: WAp to replace each string of one or more blanks by a single blank
Sample I/P: Enter the string with more spaces in between teo words
	         Welcome  to   Emertxe
Sample O/P: Welcome to Emertxe
*/

#include <stdio.h>

void replace_blank(char []);		                                            //function prototype

int main()				                                                        //main function
{
    char str[500];			                                                    //defining character variable
    
    //printf("Enter the string with more spaces in between two words\n");	        //print statement
    scanf("%[^\n]", str);		                                                //read input from user


    replace_blank(str);			                                                //function call
    
    printf("%s\n", str);                                                        //print statement

    return 0;			                                                        //end of execution of program
}

void replace_blank(char str[])		                                            //function definition
{
    int i=0,j;				                                                    //integer variable
    while(str[i+1] != '\0')		                                                //loop to check for input string
    {
	    if(str[i] == '\t')		                                                                //condition to check for tab space
	    {
	        str[i] = ' ';		                                                                //if tab space available change it to space
	    }
	        if((str[i] == ' ') && (str[i+1] == ' ') || (str[i] == ' ') && (str[i+1] == '\t')) 	//condition to check for spaces and tab spaces
	        {
	            j=i;
	            while(str[j] != '\0')		                                                    //loop to check for input string 
	            {
		            str[j] = str[j+1];		                                                    //if no NULL value is present go to next
		            j++;			                                                            //increment string value
	            }
	            i--;
	        }
	        i++;
    }
}
