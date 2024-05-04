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

// Insertion at head
void insertAtHead(Node* &head, int d){
    //new node create 
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

// Insertion at Tail
void insertAtTail(Node* &tail, int d){
     // new node create
     Node* temp=new Node(d);
     tail->next=temp;
     tail=temp;
}

//Insert at middle
void insertAtPOsition(Node* &head, Node* &tail, int position, int d){
    // insert at start 
    if(position==1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
         temp=temp->next;
         cnt++;
    }
    //inseating at the last position
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return ;
    }
    //creating a node for d
    Node* nodeToInseart=new Node(d);
    nodeToInseart->next=temp->next;
    temp->next=nodeToInseart;
}

// Delation
void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev =curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    // create a new node
    Node* Node1=new Node(10);
    
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl<<endl;

    //head pointed to node 1,  insert at head
    Node* head = Node1;
    Node* tail = Node1;

    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    cout<<endl;

    insertAtPOsition(head, tail, 3, 22);
    print(head);
    cout<<endl;
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;

    deleteNode(3, head);
    print(head);
   
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;

    return 0;
}