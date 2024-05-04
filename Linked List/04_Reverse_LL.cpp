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

Node* reverseRecursive(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
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
    print(head);
    Node* newhead=reverseRecursive(head);
    print(newhead);

    return 0;
}