/*
//
// Created by abhir on 14/02/2023.
//
#include <stdio.h>

int front=0, rear=0;

struct node
{
    int data;
    int prty;
};

void pq_insert(struct node q[], int n)
{
    printf("\nInside Insert");
}

void pq_delete(struct node q[], int n)
{
    printf("\nInside Delete");
}

void pq_display(struct node q[])
{
    printf("\nInside Display");
    printf("   front: %d rear: %d", front, rear);
    if (front<rear)
    {
        if (front==0 & rear==0)
        {
            printf("\nQueue Empty");
        }
        else
        {
            int temp = front;

            printf("\nQueue is: ");
            while (temp<rear)
            {
                printf("%d ",q[temp].data);
                temp++;
            }
        }
    }
    else
    {
        printf("\nQueue Empty");
    }
}

void main()
{
    int optn=0, size;
    printf("Q Size: ");
    scanf("%d",&size);
    struct node Q[size];
    for (int i=0; i<size; i++)
    {
        Q[i].data=0;
        Q[i].prty=0;
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ",Q[i]);
    }
    while (optn!=4)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n Optn: ");
        scanf("%d",&optn);
        switch (optn)
        {
            case 1:
                pq_insert(Q,size);
                break;
            case 2:
                pq_delete(Q,size);
                break;
            case 3:
                pq_display(Q);
                break;
            case 4:
                printf("Exiting......");
                break;
            default:
                printf("Try again");
        }
    }
}*/
