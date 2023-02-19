/*
//
// Created by abhir on 30/01/2023.
//

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition (int A[], int lb, int ub)
{
    int pivot = A[lb];
    int start=lb;
    int end =ub;

    while (start < end)
    {
         while (A[start] <= pivot)
         {
             start++;
         }
         while (A[end] >= pivot)
         {
             end--;
         }
         if (start<end)
         {
             swap(&A[start],&A[end]);
         }
    }
    swap(&A[lb],&A[end]);
    return end;
}

void quicksort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(A, lb, ub);
        quicksort(A, lb,loc-1);
        quicksort(A, loc+1, ub);
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
    quicksort(A,lb, ub);
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
