/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100], i ,size, pos, value;
    
    printf("enter the number of elements");
    scanf("%d",&size);
    
    printf("enter %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the elements to insert");
    scanf("%d",&value);
    
    printf("enter the position to insert");
    scanf("%d",&pos);
    
    if (pos < 0 || pos > size){
        printf("invalid position");
        return 1;
    }
        
        for(i=size;i>pos;i--){
            arr[i]=arr[i-1];
        }
        
        arr[pos]=value;
        size++;
        
        printf("after insertion");
        for(i=0;i<size;i++){
            printf("%d",arr[i]);
        }
        
        
    

    
    return 0;
}
