// find the middle Node of single linked list

#include<iostream>
using namespace std;

class Node{
     public:
     int data;
     Node* next;

     //constructor
     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Insertion at Tail
void insertAtTail(Node* &tail, int d){
     // new node create
     Node* temp=new Node(d);
     tail->next=temp;
     tail=temp;
}

Node* getmiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    // 2 Node
if(head->next->next==NULL){
    return head->next;
}
Node* slow=head;
Node* fast=head->next;

while(fast != NULL){
    fast=fast->next;
    if(fast != NULL){
        fast=fast->next;
    }
    slow=slow->next;
 }
return slow;
}

int main(){
    // create a new node
    Node* Node1=new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,18);
    insertAtTail(tail,20);
    insertAtTail(tail,22);
    print(head);

    Node* ans=getmiddle(head);
    print(ans);
    return 0;
}