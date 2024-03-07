#include <stdio.h>

void bubbleSort(int array2[ ], int n)
{
   int i, j, temp, swap[n];
   for (i = 0; i < n; i++)
      swap[i] = 0;
   for (i = 0; i < n-1; i++)
   {
       printf("%d: is the number of time %d is swapped\n",  i+1, i+1);
       for (j = 0; j < n-i-1; j++)
       {
            
           if (array2[j] > array2[j+1])
           {
              temp = array2[j];
              array2[j] = array2[j+1];
              array2[j+1] = temp;
              swap[j]++;
           }
       }
   }
   
}

int main()
{
   int array2[ ] = {90,80,70,60,50,40,30,20,10 };
   int n = sizeof(array2)/sizeof(array2[0]);
   bubbleSort(array2, n);
   return 0;
}