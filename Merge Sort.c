/*
//
// Created by abhir on 30/01/2023.
//
#include <stdio.h>

void merge (int A[], int lb, int mid, int ub)
{
   int i = lb;
   int j = mid+1;
   int k= lb;
   int B[ub+1];

   while (i <= mid && j <= ub)
   {
       if (A[i]<=A[j])
       {
           B[k]=A[i];
           i++;
       }
       else
       {
           B[k]=A[j];
           j++;
       }
       k++;
   }
   if (i>mid)
   {
       while (j<=ub)
       {
           B[k]=A[j];
           j++;
           k++;
       }
   }
   else if (j>mid)
   {
       while (i<=mid)
       {
           B[k]=A[i];
           i++;
           k++;
       }
   }

   for (k=lb; k<=ub; k++)
   {
       A[k]=B[k];
   }
}

void mergesort(int A[], int lb, int ub)
{
    if (lb<ub)
    {
        int mid = (lb+ub)/2;
        mergesort(A, lb,mid);
        mergesort(A,mid+1, ub);
        merge(A, lb, mid, ub);
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
    int lb = 0;
    int ub = n-1;
    mergesort(A,lb, ub);
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
