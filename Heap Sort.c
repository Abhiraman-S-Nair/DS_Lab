//
// Created by Abhiraman on 30/01/2023.
//

// Calling Order : main --> heapsort --> heapify --> swap --> heapify


#include <stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify (int A[], int n, int i)
{
    int lrgst=i;
    int l_chld=(2*i)+1;         // left child of node i in a binary tree is at index 2i
    int r_chld=((2*i)+1)+1;     // right child of node i in a binary tree is at index 2i+1

    // swapping nodes if child is bigger than the parent node
    if(l_chld<n && A[l_chld]>A[lrgst])
    {
        lrgst=l_chld;
    }
    if(r_chld<n && A[r_chld]>A[lrgst])
    {
        lrgst=r_chld;
    }
    if(lrgst!=i)
    {
        swap(&A[lrgst],&A[i]);
        heapify(A,n,lrgst);
    }
}

// 1st step
void heapsort (int A[],int n)
{
    // to make the max heap, pls note this is not yet sorted
    for (int i=(n/2)-1; i>=0;i--)
    {
        heapify(A,n,i);
    }

    // this is to delete the root node and essentially finally sort the array
    for (int i=n-1; i>=0; i--)
    {
        swap(&A[0],&A[i]);
        heapify(A,i,0);
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
    heapsort(A,n);
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


 /*Delete (TREE, ITEM)

Step 1: IF TREE = NULL
             Write "item not found in the tree"
        ELSE IF ITEM < TREE -> DATA
            Delete(TREE->LEFT, ITEM)
        ELSE IF ITEM > TREE -> DATA
            Delete(TREE -> RIGHT, ITEM)
        ELSE IF TREE -> LEFT AND TREE -> RIGHT
            SET TEMP = findLargestNode(TREE -> LEFT)
            SET TREE -> DATA = TEMP -> DATA
            Delete(TREE -> LEFT, TEMP -> DATA)
        ELSE
            SET TEMP = TREE
            IF TREE -> LEFT = NULL AND TREE -> RIGHT = NULL
                SET TREE = NULL
            ELSE IF TREE -> LEFT != NULL
                SET TREE = TREE -> LEFT
            ELSE
                SET TREE = TREE -> RIGHT
Step 2: END*/

