#include<stdio.h>
 main() {
   int i, arr[50], num;
    printf("\nEnter no of elements :");
   scanf("%d", &num);
    //Reading values into Array
   printf("\nEnter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }
    //Printing of all elements of array
   for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }
 }
