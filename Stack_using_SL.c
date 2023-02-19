
//
// Created by abhir on 15/02/2023.
//
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;

void push()
{
    struct node *new = (struct node*)malloc (sizeof (struct node));
    int dat;
    printf("Enter the value to be inserted: ");
    scanf("%d",&dat);

    new->data = dat;
    new->link = NULL;

    if (head == NULL)
    {
        head = new;
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            temp = temp->link;
        }
        temp = new;
    }
}
