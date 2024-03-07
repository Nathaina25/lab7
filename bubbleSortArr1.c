#include <stdio.h>

void bubbleSort(int array1[], int n)
{
   int i, j, temp, swap[n];
   for (i = 0; i < n; i++)
      swap[i] = 0;
   for (i = 0; i < n-1; i++)
   {
       printf("%d: is the number of time %d is swapped\n",  i+1, i+1);
       for (j = 0; j < n-i-1; j++)
       {
           if (array1[j] > array1[j+1])
           {
              temp = array1[j];
              array1[j] = array1[j+1];
              array1[j+1] = temp;
              swap[j]++;
           }
       }
   }
   //for (i = 0; i < n; i++)
      //printf(" %d:# of times  %d is swapped\n", i, swap[i]);
}

int main()
{
   int array1[ ] = {97,16,45,63,13,22,7,58,72};
   int n = sizeof(array1)/sizeof(array1[0]);
   bubbleSort(array1, n);
   return 0;
}