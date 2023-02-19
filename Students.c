//
// Created by abhir on 15/02/2023.
//

#include<stdio.h>
#include<stdlib.h>


struct node{
    int rolln;
    char name[100];
    char class[5];
    struct node* next;
};

struct node *first=NULL, *ptr=NULL;

void create_node(int r,char n[100],int n1,char c[5],int c1){
    struct node *temp ;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->rolln = r;
    for(int i=0;i<n1;i++) temp->name[i] = n[i];
    for(int i=0;i<c1;i++) temp->class[i] = c[i];
    temp->next = NULL;
    if(first==NULL){
        first = temp;
        ptr = temp;
    }
    else{
        while(ptr->next!=NULL) ptr = ptr->next;
        ptr->next = temp;
    }
}

void print_rec(){
    struct node *ptr=first;
    while(ptr!=NULL){
        printf("%d\t",ptr->rolln);
        printf("%s\t",ptr->name);
        printf("%s\t",ptr->class);
        ptr = ptr->next;
    }
}

int main(){
    int size=1,r,n1,c1;
    char n[100],c[5],a[1],b[1];
    b[0]='y';
    while(size!=0)
    {
        printf("Roll no:");
        scanf("%d",&r);
        printf("Name:");
        scanf("%s",n);
        n1=sizeof(n);
        printf("Class:");
        scanf("%s",c);
        c1=sizeof(c);
        create_node(r,n,n1,c,c1);
        printf("View records? Press y");
        scanf("%s",a);
        if(a[0]==b[0]) print_rec();
        printf("Press 0 to terminate");
        scanf("%d",&size);
    }
}
