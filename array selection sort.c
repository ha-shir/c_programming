/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[]={ 55, 32, 46, 12, 16 };
   int n =sizeof(arr)/sizeof(arr[0]);
   int i , j ,minIndex ,temp;
   
   printf("original array:");
   for(i=0;i<n;i++){
       printf("%d",arr[i]);
   }
   printf("\n");
   
   
    // Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        // Assume the first element is the minimum
        minIndex = i;
        
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
        }    
        
           // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
     // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");



    return 0;
}