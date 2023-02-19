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

void selectionsort(int A[], int n)
{
    // in the first pass the least element is found and swapped with the element at index 0
    // in the second pass the second-smallest element is found and swapped with the element at index 1 and so on
    for (int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++)
        {
            if (A[j]<A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&A[i], &A[min]);
        }
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

    selectionsort(A,n);

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
