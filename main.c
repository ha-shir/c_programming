/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int fact=1;
    int num1;
     printf("enter a number: ");
     scanf("%d",&num1);
    
    
    for(i=1;i<=num1;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    
    
    

    return 0;
}
