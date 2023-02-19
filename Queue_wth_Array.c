//
// Created by abhir on 14/02/2023.
//

/*#include <stdio.h>
int front=0, rear=0;

void enqueue(int q[], int size)
{
    printf("\nInside Add");
    printf("    rear: %d",rear);
    int inpt;
    if (rear<=size-1)
    {
        printf("\nEnter element: ");
        scanf("%d",&inpt);
        q[rear]=inpt;
        rear++;
        printf("rear: %d",rear);
    }
    else
    {
        printf("\nQueue Full");
    }
}

void dequeue(int q[], int size)
{
    printf("\nInside Delete");
    printf("    front: %d",front);
    if (front<=rear)
    {
        if (front==0 & rear==0)
        {
            printf("\nQueue Empty");
        }
        else
        {
            printf("\nDeleted element is : %d", q[front]);
            front++;
            printf("front: %d",front);
        }
    }
    else
    {
        printf("\nQueue Empty");
    }
}

void display(int q[])
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
                printf("%d ",q[temp]);
                temp++;
            }
        }
    }
    else
    {
        printf("\nQueue Empty");
    }
}*/

/*
void main()
{
    int optn=0,n;
    printf("Q size: ");
    scanf("%d", &n);
    int Q[n];
    for (int i=0; i<n; i++)
    {
        Q[i]=0;
    }

    while (optn!=4)
    {
        printf("\n1. Add\n2. Delete\n3. Display\n4. Exit\n : ");
        scanf("%d", &optn);
        switch (optn)
        {
            case 1:
                enqueue(Q,n);
                break;
            case 2:
                dequeue(Q,n);
                break;
            case 3:
                display(Q);
                break;
            case 4:
                printf("Exiting......");
                break;
            default:
                printf("Try again");
        }
    }
}*/




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
struct node Q[20];

void pq_insert(int n)
{
    printf("\nInside Insert");
    printf("    rear: %d",rear);
    int inpt, prio;
    if (rear<=n-1)
    {
        printf("\nEnter element: ");
        scanf("%d",&inpt);
        printf("\nEnter priority: ");
        scanf("%d",&prio);
        Q[rear].data=inpt;
        Q[rear].prty=prio;
        rear++;
        printf("rear: %d",rear);

        int temp = front;
        for  (int i=0; i<temp-1; i++)
        {
            for (int j=0; j<temp-i-1; j++)
            {
                if (Q[j].prty>Q[j+1].prty)
                {
                    struct node tmp;
                    tmp.prty=Q[j].prty;
                    tmp.data=Q[j].data;
                    Q[j].prty=Q[j+1].prty;
                    Q[j].data=Q[j+1].data;
                    Q[j+1].prty=tmp.prty;
                    Q[j+1].data=tmp.data;
                }
            }
        }
        int temp = front;
        printf("\nQueue is: ");
        while (temp<rear)
        {
            printf("%d ",Q[temp].data);
            temp++;
        }

    }
    else
    {
        printf("\nQueue Full");
    }

}

void pq_delete( int n)
{
    printf("\nInside Delete");
}

void pq_display()
{
    printf("\nInside Display");
    printf("   front: %d rear: %d", front, rear);
    if (front==0 & rear==0)
    {
        printf("\nQueue Empty");
    }
    else if (front<rear)
    {
        int temp = front;
        printf("\nQueue is: ");
        while (temp<rear)
        {
            printf("%d ",Q[temp].data);
            temp++;
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
    for (int i=0; i<size; i++)
    {
        Q[i].data=0;
        Q[i].prty=0;
    }

    while (optn!=4)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n Optn: ");
        scanf("%d",&optn);
        switch (optn)
        {
            case 1:
                pq_insert(size);
                break;
            case 2:
                pq_delete(size);
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
}

/*
#include <stdio.h>

int size;
int q[50], s[50];
int top=-1, front=-1, rear=-1;

int main(){
    printf("Queue size:");
    scanf("%d",&size);
    printf("Enter queue:\n");
    for(int i=0;i<size;i++) scanf("%d",&q[i]);
    front=0;
    rear=size-1;
    while(front<=rear){
        top++;
        s[top]=q[front];
        front++;
    }
    int j=0;
    while(top!=0){
        q[j]=s[top];
        j++;
        top--;
    }
    q[j]=s[top];
    printf("Reversed queue:\n");
    for(int i=0;i<size;i++) printf("%d\t",q[i]);
}
*/
