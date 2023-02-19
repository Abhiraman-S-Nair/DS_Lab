
//
// Created by abhir on 12/02/2023.


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;

void sl_insert()
{
    struct node *new = (struct node*)malloc (sizeof (struct node));
    int dat, optn;
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
        int srch;
        scanf("Enter the element after which the element is to be inserted: %d",&srch);
        while (temp != NULL)
        {
            if(temp->data == srch) break;
            else temp = temp->link;
        }
        if(temp->link!=NULL){
            new->link=temp->link;
            temp->link = new;
        }
        else temp = new;
    }
}

void sl_delete()
{
    struct node *temp = head, *prev= head;
    int srch;
    scanf("Enter the element to be deleted: %d",&srch);
    while (temp->data != srch)
    {
        prev = temp;
        temp = temp->link;
    }
    if (temp->data == srch)
    {
        prev->link=temp->link;
        free(temp);
    }
}

void sl_display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ",&temp->data);
        temp = temp->link;
    }
}

void main()
{
    int n = 0;
    while (n !=4)
    {
        printf("Choose from one of the following operations\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\nEnter your choice:  ");
        scanf("%d",&n);
        if (n == 1)
        {
            sl_insert();
        }
        else if (n == 2)
        {
            sl_delete();
        }
        else if (n == 3)
        {
            sl_display();
        }
        else if (n == 4)
        {
            printf("You are now exiting the program");
        }
        else
        {
            printf("Please try again");
            main();
        }
    }
}
