/*
Name: Sharan Rathnakumar
Date: 22nd November 2022
Description: WAP to check given string is Pangram or not
Input: Enter the string: The quick brown fox jumps over the lazy dog
Output: The Entered String is a Pangram String
*/
#include <stdio.h>

int pangram(char []);                           //Function declaration
int pangram(char arr[])                         //Function definiton
{
    int i,index=0,count=0,arr2[26];             //Initialsing variables and array
    for(i=0;i<26;i++)                           //Assigning 0 to all array elements
    {
        arr2[i]=0;
    }

    for(i=0;arr[i]!='\0';i++)                   //Iterating arr till null character
    {
        if(arr[i]>=65 && arr[i]<=90)            //Cheking whether character is capital or small
        {
            index=(arr[i]-65);                  //To get corresponding index substarcting with 65
            arr2[index]=1;
        }
        else if(arr[i]>=97 && arr[i]<=122)      //Check whether character is lower case
        {
            index=(arr[i]-97);                  //To get corresponding index substarcting with 97
            arr2[index]=1;
        }
    }
    for(i=0;i<26;i++)                           //Checking the count of 1s in array
    {
        if(arr2[i]==1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int condition;
    char string[100];
    printf("Enter the string: ") ;
    scanf("%[^\n]",string);                     //Reading string input
    condition=pangram(string);                  //Function call
    if(condition==26)                           //Checking condition for pangram
    {
        printf("The Entered String is a Pangram String\n");
    }
    else
    {
        printf("The Entered String is not a Pangram String\n");
    }

    return 0;
}
