/*
//
// Created by abhir on 30/01/2023.
//
#include <stdio.h>

void insertionsort(int A[], int n)
{
   // store element to temp, then compare it with all previous elements
   // and insert it in the correct position
   for (int i=1; i<n; i++)
   {
       int temp=A[i];
       int j=i-1;

       while (j>=0 && A[j]>temp)
       {
           A[j+1]=A[j];
           j--;
       }
       A[j+1]=temp;
   }
}

void main()
{
    int A[]={90,8,34,-8, 10,0};
    printf("Unsorted array: \nA={");
    for (int i=0; i<6; i++)
    {
        printf("%d",A[i]);
        if (i==5)
        {
            printf("}");
        }
        else
        {
            printf(",");
        }
    }
    int n = sizeof(A) / sizeof(A[0]);
    insertionsort(A,n);
    printf("\nSorted array: \nA={");
    for (int i=0; i<6; i++)
    {
        printf("%d",A[i]);
        if (i==5)
        {
            printf("}");
        }
        else
        {
            printf(",");
        }
    }
}
*/
