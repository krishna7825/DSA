#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
void printNode(struct Node *head){
    struct Node * ptr = head;
    // Using while loop
    // cout<<"Element is :"<<ptr ->data<<endl;
    //     ptr = ptr->next;
    //     while(ptr != head){
    //     cout<<"Element is :"<<ptr ->data<<endl;
    //     ptr = ptr->next; }
    do{
       cout<<"Element is :"<<ptr ->data<<endl;
       ptr = ptr->next; 
    }while (ptr != head);
}
struct Node * insertionAtfrist(struct Node *head,int data){
   struct Node *ptr = (struct Node *)malloc(sizeof( struct Node));
   struct Node *p = head;
   ptr->data = data;
   while(p->next != head){
    p = p->next;
   }
   p->next = ptr;
   ptr->next = head;
   head = ptr;
   return head;
}
struct Node *insertAtbetween(struct Node *head,int index,int data){
   struct Node *ptr = (struct Node *)malloc(sizeof( struct Node));
   struct Node *p = head;
   ptr->data=data;
    for(int i =1;i<index;i++){
        p=p->next;
    }
   ptr->next=p->next;
   p->next = ptr;
   free(ptr);
   return(head);
}
struct Node *insertAtend(struct Node*head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof( struct Node));
    struct Node *p = head;
    ptr->data=data;
     while(p->next != head){
    p = p->next;
   }
   ptr->next=head;
   p->next=ptr;
   return(head);
}
struct Node *insertAtNode(struct Node*head,int node,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof( struct Node));
    struct Node *p = head;
    ptr->data=data;
    for(int i =1;i<node-1;i++){
        p=p->next;
    }
    ptr->next=p->next;
    p->next = ptr;
    return(head);
}


int main (){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


    //Allocate memory for nodes in the linked list in heap
    fourth = ( struct Node *)malloc(sizeof( struct Node));
    head = ( struct Node *)malloc(sizeof( struct Node));
    second = ( struct Node *)malloc(sizeof( struct Node));
    third = ( struct Node *)malloc(sizeof( struct Node));


    // Link first ans second nodes
    head->data = 7;
    head->next = second;

    // Link first ans second nodes
    second->data = 11;
    second->next = third;

    // Link first ans second nodes
    third->data = 70;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;
   
    cout<<"Enter linked list before insertion"<<endl;
    printNode(head);

    // head = insertionAtfrist(head , 45);
    // head = insertAtbetween(head,2,34);
    // head = insertAtend(head,67);
    head = insertAtNode(head,2,98);

    cout<<"Enterlinked list after insertion"<<endl;
    printNode(head);

    return 0;
}