#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
    Node * next;
    // Constructor
    Node(int value){
    this->data = value;
    this->next = NULL;
    this->prev = NULL;
    }
};
void insertAtHead(int value,Node*&head,Node* &tail){ 
    // if ll is empty
    if(head == NULL && tail == NULL){
        Node * newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // ll is not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev=newNode;
        head = newNode; 
    }
}; 
void printHead(Node* head){
    Node * temp = head;
     while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
     }cout<<"NULL"<<endl;
} 
void printTail(Node* head,Node* tail){
    Node * temp = tail;
     while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
     }cout<<"NULL"<<endl;
} 
void insertAtTail(int value,Node*&head,Node* &tail){
     // if ll is empty
    if(head == NULL && tail == NULL){
        Node * newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    // ll is not empty
    else{
        Node* newNode = new Node(value);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
int getlength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count ++;
        temp = temp->next;
    }
    return count;
}
void insertAtPosition(int value,int position,Node*&head,Node* &tail){
    
    int len = getlength(head);
    // Case 1 = insert at position  1
    if(position== 1){
        insertAtHead(value,head,tail);
    }
     // Case 2 = insert at position  tail
    else if(position == len+1){
        insertAtTail(value,head,tail);
    }
    // Case 3 = insert at any position 
    else{
        Node* temp = head;
        
        for(int i =0;i<position-2;i++){
            temp = temp->next;
        }
        Node* forward = temp->next;
        Node* newNode = new Node(value);
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode;

    }
}
void reverseLL(Node*&head,Node* &tail){
    
}
int main (){
    Node* head = NULL;
    Node * tail = NULL;
    int target = 200;

    insertAtTail(10,head,tail);
    // 20->NULL
    insertAtTail(20,head,tail);
    // 40->20->NULL
    insertAtTail(30,head,tail);
    // 60->40->20->NULL
    insertAtTail(60,head,tail);


    // bool ans = Search(head,target);
    // cout<<ans<<endl;

    // insertAtPosition(200,4,head,tail);


    // insertAtHead(10,head,tail);
    // // 10->NULL
    // insertAtHead(20,head,tail);
    // // 20->10->NULL
    // insertAtHead(30,head,tail);
    // // 30->20->10->NULL

    // printTail(head , tail);
    printHead(head);

     
    
    return 0;
}