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

void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
int main(){
// create a new node
    Node* Node1=new Node(1);

    //head pointed to node 1,  insert at head
    Node* head = Node1;
    Node* tail = Node1;

    insertAtTail(tail,0);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    print(head);
    
    cout<<"Sort LL :"<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
    Node* newhead=sortList(head, 2);
    print(newhead);
    return 0;
}