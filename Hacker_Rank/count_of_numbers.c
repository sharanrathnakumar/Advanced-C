/*
Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int iter =0, num[10] = {0}, index;
    scanf("%s",str);
    
    while(str[iter] != '\0')
    {
        if(str[iter] >= 48 && str[iter] <= 57)
        {
            index = str[iter] % 48;
            num[index]++;
        }
        
        iter++;        
    }
    
    for(iter =0; iter < 10; iter++)
    {
        printf("%d ",num[iter]);
    }
    return 0;
}
