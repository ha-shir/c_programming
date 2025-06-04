/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int num;
  int left,right,middle,size;
  int list[]={10,15,20,25,30,35};
  
  size = sizeof(list) / sizeof(list[0]);  
 
  printf("enter the element to search:");
  scanf("%d",&num);
    printf(" element %d search\n:",num);

  left =0;
  right= size-1;
  
  while(left <= right){
      middle= (left + right)/2;
      if(list[middle] == num){
          printf("element found at positition %d",middle);
          break;
      }
          else if(list[middle]>num)
          right= middle-1;
              
              else
              left=middle+1;
              
          
      }
      if(left > right){
      printf("element not found in the list.");
  }
   return 0;
}
