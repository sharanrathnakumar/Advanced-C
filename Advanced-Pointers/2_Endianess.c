/*
Name: Sharan Rathnakumar
Date: 1st January 2023
Description: WAP to convert Little Endian data to Big Endian
Input:Enter the size: 2
Enter any number in Hexadecimal: ABCD
Output:
After conversion CDAB
 */

#include <stdio.h>
#include <stdio_ext.h>

int main(void)
{
    unsigned int i, size, x;            // Variable declaration int
    unsigned short s_num;                       // Variable short
    char *ptr;                          // Pointer for storing 1 Byte

    printf("Enter the size: ");         // Input the size
    scanf("%d", &size);

    if(size == 2)                               // If entered size is two
    {
        printf("Enter any number in Hexadecimal: ");            // Input number
        __fpurge;                                               // Clear std out
        scanf("%hX",&s_num);                                    // Scan the input and save to short using hX
        ptr = (char *) &s_num;                                  // Save address to ptr

        x=(s_num & 0x00FF) << 8 | (s_num & 0xFF00) >> 8;        // Reverse the the number
    }
    else if(size == 4)                  // If entered size is four
    {
        printf("Enter any number in Hexadecimal: ");            // Input number
        __fpurge;                                               // Clear std IO
        scanf("%X", &i);                                        // Scan the input and save to int
        ptr = (char *) & i;                                     // Save address to ptr

        x=((i & 0xFF000000)>>24) | ((i & 0x00FF0000) >>8) | ((i & 0x0000FF00)<<8) | ((i & 0x000000FF)<<24); // Reverse the number
    }

    else
        printf("Error: Please enter size of 2 or 4");           // Error messege

    printf("After conversion %X", x);                   // Print output

}
