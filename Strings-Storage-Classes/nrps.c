/*
Name: Sharan Rathnakumar
Date: 5th December 2022
Description:  Generate consecutive NRPS of length n using k distinct character
Input:  Enter the number characters C : 3
        Enter the Length of the string N : 6
        Enter 3 distinct characters : a b c
Output: Possible NRPS is abcbca
*/
#include <stdio.h>

void nrps(char str[], int ch_count, int str_len);

int main()
{
    int ch_count,str_len;
    //read the input from the user
    printf("Enter the number characters C : ");
    scanf("%d",&ch_count);
    printf("Enter the Length of the string N : ");
    scanf("%d",&str_len);

    char str[ch_count];
    printf("Enter 3 distinct characters : ");
    scanf("%s",str);

    //function call to pass input to the function
    nrps(str,ch_count,str_len);
    return 0;
}

void nrps(char *str, int ch_count, int str_len)
{
    int i,j=0,flag=0,index=0;
    //Check whether entered characters are nrps
    for(i=1;i<ch_count;i++)
    {
        if(str[i-1] == str[i])
        {
            flag+=1;
        }
    }

    if(str[0]==str[ch_count-1])
    {
        flag+=1;
    }

    //If entered characters are  not nrps
    if(flag>=1)
    {
        printf("Error : Enter distinct characters \n");
    }
    //Creating nrps pattern
    else
    {
/*      for(i=0;i<=(str_len-ch_count);i++)
        {
            for(j=index;j<ch_count;j++)
            {
                printf("%c ",str[j]);
            }

            if(index < ch_count)
            {
                index+=1;
            }
            else
            {
                index=0;
            }
        }
*/
        for(i=0;i<str_len;i++)
        {
            printf("%c ",str[index]);
            index++;

            if(index == ch_count)
            {
                ++j;
                if(j==ch_count-1)
                {
                    index=0;
                    j=0;
                }
                else
                {
                index=j;
                }
            }
        }
    }

}
