/*
//
// Created by abhir on 20/02/2023.
//
#include<stdio.h>
#include<stdlib.h>

int hashtable[10];

void initialize()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        hashtable[i] = (int) NULL;
    }
}

void insert(int value)
{
    int key = value % 10;
    if (hashtable[key]==(int)NULL)
    {
        hashtable[key]=value;
    }
    else
    {
        int i=1;
        while(i<10)
        {
            key=(value+i)%10;
            if (hashtable[key]==(int)NULL)
            {
                hashtable[key]=value;
                break;
            }
            else
            {
                i++;
            }
        }
    }
}

void print()
{
    printf("\n\nHashtable: \n");
    for(int i=0; i<10; i++)
    {
        printf("\n[%d] --> %d", i, hashtable[i]);
    }
}
void main()
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
*/
