/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a1;
   int a2;
   int a3;
   int sum;
   
   printf("enter angle1: ");
   scanf("%d",&a1);
   
   printf("enter angle2: ");
   scanf("%d",&a2);
   
   printf("enter angle3:  ");
   scanf("%d",&a3);
   
   sum = a1 + a2+ a3;
   
   if(sum == 180){
       printf("then triangle can be formed");
   }
       else{
           printf("then triangle cannot be formed");
       }
   

    return 0;
}
