#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
void printNode(struct Node *head){
    struct Node *ptr = head;
    cout<<"Element is :"<<ptr ->data<<endl;
     ptr = ptr->next;
   while(ptr != head){
    cout<<"Element are "<<ptr->data<<endl;
    ptr=ptr->next;
   }
}
struct Node *DeleteAtBeg(struct Node *head){
    struct Node *p =head;
    while(p->next!=head){
        p=p->next;
    }
    head = head->next;
    p->next = head;
   return(head);
}
struct Node *DeleteAtBetween(struct Node *head,int index){
    struct Node * p=head;
    struct Node * q=head->next;
    for(int i = 1;i<index;i++){
        p=p->next;
        q=q->next;
    }
    p->next= q->next;
    return(head);
}
struct Node *DeleteAtEnd(struct Node *head){
    struct Node * p=head;
    struct Node * q=head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next = head;
    return(head);
}
struct Node *DeleteAtNode(struct Node *head,int index){
    struct Node * p=head;
    struct Node * q=head->next;
    for(int i = 1;i<index-2;i++){
        p=p->next;
        q=q->next;
    }
    p->next= q->next;
    return(head);
}




int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* first=(struct Node*)malloc(sizeof(struct Node));
    struct Node*sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=first;

    first->data=43;
    first->next = sec;

    sec->data=34;
    sec->next=third;

    third->data=84;
    third->next=head;

    cout<<"Before Deleting"<<endl;
    printNode(head);

    // head = DeleteAtBeg(head);
    // head = DeleteAtBetween(head , 2);
    // head = DeleteAtEnd(head);
    head = DeleteAtNode(head,3);

    cout<<"after Deleting"<<endl;
    printNode(head);




    return 0;
}