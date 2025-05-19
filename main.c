/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=8;
    int b=6;
    char operator='8';
   
    switch(operator){
        case '+':
        printf ( "%d", a+b );
        break;
        case '-':
        printf (" %d", a-b );
        break;
        case '*':
        printf ("%d", a*b );
        break;
        case '/':
        printf ("%d", a/b );
        break;
        case '%':
        printf ("%d" , a%b);
        break;
        default:
        printf ("invalid operation");
        
        
        
        
        
        
    }
   
    return 0;
}
