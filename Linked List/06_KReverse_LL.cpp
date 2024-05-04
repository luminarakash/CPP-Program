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

Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}

int main(){
    // create a new node
    Node* Node1=new Node(10);

    //head pointed to node 1,  insert at head
    Node* head = Node1;
    Node* tail = Node1;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,18);
    insertAtTail(tail,20);
    insertAtTail(tail,22);
    print(head);
    
    cout<<"reverse LL :"<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
    Node* newhead=kReverse(head, 2);
    print(newhead);
    return 0;
}