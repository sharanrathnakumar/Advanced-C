/*
Name: Sharan Rathnakumar
Date: 1st January 2023
Description: Read n & n person names of maxlen 20. Sort and print the names
Input:Enter the size: 5

Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

Output:
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
 */

#include <stdio.h> //Header file for standard input output function
#include<stdlib.h>
#include<string.h>

//prototype for 3functions
void sort_names(char (*)[20], int);
int my_strcmp( char *,char *);
void my_strcpy(char *,char *);

int main() //Data type int is used with main() function
{
    //To declare variables
    int num;
    char (*name)[20];

    //To read size
    printf("Enter the size :"); //To print Enter the size
    scanf("%d",&num); //To read variable num from user

    //for dynamic memory allocation
    name=malloc(sizeof(char[20])*num);


    printf("Enter the %d names of length max 20 characters in each\n",num);
    for(int i=0;i<num;i++)
    {
        scanf("%s",name[i]);  //To read name from user
    }
    // for function call
    sort_names(name,num);



}
//function definition for sort
void sort_names ( char (*name)[20] ,int num)
{
    char temp[20];
    int i,j;
    for(  i=0;i<num;i++)
    {
        for( j=i+1;j<num;j++)
        {

            //comparison and copying using my_strcmp and my_strcpy
            if (my_strcmp(name[i], name[j]) > 0)
            {
                //to copy name[i] to temp
                my_strcpy(temp, name[i]);

                //to copy name[j] to name[i]
                my_strcpy(name[i], name[j]);

                //to copy name[j] to temp
                my_strcpy(name[j], temp);


            }
        }
    }
    //to print sorted names
    printf("The sorted names are:\n");
    for(int i=0;i<num;i++)
    {

        printf("%s\n",name[i]);

    }
}
//for function definition for my_strcmp
int my_strcmp(char *str1, char*str2)
{

    while( *str1==*str2 && *str1 !='\0' && *str2 !='\0')
    {
        str1++;
        str2++;
    }
    if (*str1 == *str2)
    {
        return 0;
    }
    else
    {
        return *str1-*str2;
    }
}
//function definition for my_strcpy
void my_strcpy(char *str1,char *str2)
{
    int i=0;
    //while condition
    while( str2[i] !='\0')
    {
        str1[i]=str2[i];
        i++;
    }

    str1[i]='\0';
}
