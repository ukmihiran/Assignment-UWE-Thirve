//C Task 1: Strings, For loops, Conditions
//Student Num: 21058644

#include <stdio.h>

int main()
{
    int i,j,n;      // variable define
    char ch='A';

    printf("Enter Number: \n");
    scanf("%d",&n);             // User input

    for (i = 1; i <= n; i++) // Loop to print rows
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c", ch++);      // print Alp
        }
        printf("\n");
        
    }
    return 0;
    
}