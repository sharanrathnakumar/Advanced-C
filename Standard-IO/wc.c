/*
Name: Sharan Rathnakumar
Date: 16th November 2022
Description: WAP to count no. of characters, words and lines, entered through stdin
Input:  Hello world
        Dennis Ritchie
        Linux
Output: Character count : 33
        Line count : 3
        Word count : 5
*/

#include<stdio.h>
int main()
{
    int ch_count=0,word_count=0,line_count=0,flag=0;
    char ch,ch2;
    while((ch=getchar())!= EOF)
    {
        if((ch == ' ') || (ch =='\t'))
        {
            if(flag!=1)
            {
//          printf("First Space");
            word_count+=1;
            ch_count+=1;
            flag=1;
            }
            else
            {
                ch_count+=1;
            }
        }
        else if(ch =='\n')
        {
//          printf("New Line");
            line_count+=1;
            ch_count+=1;
            word_count+=1;
        }
        else
        {
//          printf("Else");
            flag=0;
            ch_count+=1;
        }
//      printf("Outer Loop");
    }

    printf("Character count : %d\nLine count: %d\nWord count: %d\n",ch_count,line_count,word_count);
}
