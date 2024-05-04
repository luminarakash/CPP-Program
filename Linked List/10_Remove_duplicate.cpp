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

     // desstructor
     ~Node(){
        int value= this->data;
        //menory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is face node with data :"<<value<<endl;
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

Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head; 
}

int main(){
    // create a new node
    Node* Node1=new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    insertAtTail(tail,12);
    insertAtTail(tail,10);
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,15);
    
    Node* newhead=uniqueSortedList(head);
    print(newhead);

    return 0;
}