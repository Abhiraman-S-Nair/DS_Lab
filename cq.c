#include <stdio.h>
int front=-1,rear=-1;
int size;
int items[100];

void print_cq(){
    if(front==-1)
    {
        printf("\nQueue empty");
    }
    else
    {
        int i=front;
        while(i!=rear)
        {
            printf("%d ",items[i]);
            i=(i+1)%size;
        }
        printf("%d ",items[i]);
    }
}

void dlt_cq(){
    if(front==-1)
    {
        printf("\nStack empty");
    }
    int e=items[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
    printf("\nDltd: %d",e);
    printf("\nCurrent Queue: ");
    print_cq();
}

void insert_cq(){
    if(rear==size-1)
    {
        printf("Queue full");
    }
    else
    {
        int a;
        printf("Element: ");
        scanf("%d",&a);
        if(front==-1) front++;
        rear=(rear+1)%size;
        items[rear]=a;
        printf("Inserted: %d",items[rear]);
        printf("\nCurrent Queue: ");
        print_cq();
    }
}

int main(){
    int op=0, e;
    printf("Array size: ");
    scanf("%d",&size);
    while(op!=4){
        printf("\n1. Insert\n2. Dlt\n3. Print\n4. Exit\nEnter choice:");
        scanf("%d",&op);
        switch(op){
            case 1:

                insert_cq();
                break;
            case 2:
                dlt_cq();
                break;
            case 3:
                print_cq();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice");
        }
    }
}
