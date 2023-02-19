//
// Created by abhir on 20/02/2023.
//
#include<stdio.h>
#include<stdlib.h>

#define size 7

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void initialize()
{
    int i;
    for(i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    //create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
    int key = value % size;

    //check if chain[key] is empty
    if(chain[key] == NULL)
        chain[key] = newNode;
        //collision
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    initialize();
    int choice = 0, value;
    printf("\n\n\t\tMENU\n 1. Insert into the hashtable\n 2. Print the hashtable\n 3. Exit\n");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                print();
                break;
            case 3:
                printf("\nExiting....");
                break;
            default:
                printf("\nInvalid choice");
        }
    } while(choice !=3);
}
