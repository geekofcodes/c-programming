//Program to print 1D Array

#include<stdio.h>

void main ( ){
   int a[5],i;
   printf ("enter 5 elements");
   for ( i=0; i<5; i++)
      scanf("%d", &a[i]);
   printf("elements of the array are");
   for (i=0; i<5; i++)
      printf("%d", a[i]);
}