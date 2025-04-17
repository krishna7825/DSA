#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
    // constructor 
    Node(int value){
    this->data = value;
    this->next = NULL;
}
};

Node* insertAtHead(int value,Node* head ,Node* tail ){
    // LL is empty
    // we create the first node of ll
    if(head == NULL && tail == NULL){
    // step1 : Create a new node 
    Node* newNode = new Node(value);
    // step 2: head ko node pr lagao
    head = newNode;

    tail = newNode;
    } 
    // ll is not empty 
    else{
        // create a new node 
        Node* newNode = new Node(value);
        // new node ko next node se join kr do 
        newNode->next = head;
        // head pointer ko new node pr laga do
        head = newNode;
    }
    return head;
}
void insertAtTail(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    //LL is empty
    //iska mtlb abhi tum first node create krne jaa rhe ho LL ki
    //steps: create node, head on that node, tail on that node
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    //LL is not empty
    //step1: create node
    Node* newNode = new Node(value);
    //step2: tail node ko new node se connect karo 
    tail->next  = newNode;
    //step3: tail update
    tail = newNode;
  }

}

void print(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<< temp ->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;

}
int getLength(Node* head) {
  int len = 0;
  Node* temp = head;

  while(temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}
void insertAtPosition(int position ,int  value,Node*&head,Node*&tail){
    // assume there will be a valid case
    int length = getLength(head);
    // insert at first position 
    if(position == 1){
        head = insertAtHead(value,head,tail);
    }
    // insert at last position 
    else if(position == length + 1){
        insertAtTail(value,head,tail);
    }
    // insert in between kahin karna hai
    else{
        // create a new node 
        Node* temp = head;
        for(int i =0;i<position-2;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next; 
        temp->next  = newNode;


    }
}
bool search(Node* head,int target){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp ->next;
    }

}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int target = 5;

   insertAtTail(10,head,tail);
  //print(head);
  //101 -> NULL
  insertAtTail(20,head,tail);
  //print(head);
  //101->102->NULL
  insertAtTail(30,head,tail);

  insertAtTail(25,head,tail);
  insertAtTail(50,head,tail);
  print(head);
  bool ans = search(head,target);
  cout<< ans<<endl;
  

//   insertAtPosition(4,45,head,tail);
//   print(head);



    // Node* head = NULL;
    // Node* tail = NULL;
    // // ll is empty
    // head = insertAtHead(10,head,tail);
    //  print(head);
    // // 10 ->NULL
    // head = insertAtHead(20,head,tail);
    //  print(head);
    // // 20->10->NULL
    // head = insertAtHead(30,head,tail);
    // // 30->20->10->NULL

    // print(head);

    
    return 0;
};
