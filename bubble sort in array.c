/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,j;
    int A[100];
    int temp;
    
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter %d element",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (A[j]>A[j+1]){
                
                temp =A[j];
                A[j] =A[j+1];
                A[j+1]= temp;
            }
        }
    }
       printf(" sorted array:");
       for(i=0;i<n;i++){
           printf("%d",A[i]);
       }
    return 0;

}