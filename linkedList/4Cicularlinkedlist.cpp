#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node *head){
    struct Node * ptr = head;
    // Using while loop
    // cout<<"Element is :"<<ptr ->data<<endl;
    //     ptr = ptr->next;
    // while(ptr != head){
    //     cout<<"Element is :"<<ptr ->data<<endl;
    //     ptr = ptr->next;
    // }
    do{
       cout<<"Element is :"<<ptr ->data<<endl;
       ptr = ptr->next; 
    }while (ptr != head);
    
    
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

        
    
    linkedListTraversal(head);
    return 0;
}