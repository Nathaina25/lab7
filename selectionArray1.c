/******************************************************************************
Nathaina Belfort
lab assignment 7
Consider running Bubble and Selection Sorts on the two arrays shown below. 
Write a c program to compute the number of swaps performed on each value 
and the total number of swaps performed in the following 2 arrays:

array1: 97  16  45  63  13  22  7  58  72
array2: 90  80  70  60  50  40  30  20  10
                            
*******************************************************************************/
#include <stdio.h>

//a swap function to keep up everyting 
    void swap(int *x,int *y)
    {
         int tmp = *x;
         *x = *y;
         *y = tmp;
    }
    

    //now let's do the selection sort 
    void selectionSort(int arr[ ],int n)
    {
        int i,j,min, temp;
        for(i=0; i< n-1; i++)
        {
             printf("%d: is the number of time %d is swapped\n", i+1, i+1);
            min = i;
            for(j = i+1; j<n; j++)
            if(arr[j] < arr[min])
            min = j;
            //then call the swap function
            //swap(&arr[min], &arr[i]);
            if( min != i)
            swap(&arr[min], &arr[i]);
        
        }
    }
    
    
   //void printArray( int arr [ ], int size) {
  //     int i;
     //  for(i=0; i<size; i++)
    //   printf("%d\", arr[i]);
    //   
  // }

    

int main()
{
    int arr[ ] = {97,16,45,63,13,22,7,58,72};

    
    int n = sizeof(arr)/sizeof(arr[0]); //this is the size of the second array
    //call the functions in main
    selectionSort(arr,n);
   // printArray(arr,n);
    
    
    
    return 0;
}
