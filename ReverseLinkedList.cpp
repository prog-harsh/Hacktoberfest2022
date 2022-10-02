#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* takeInput(){
    int data;
    cin>>data;
    
    Node* head = NULL;
    Node* tail = NULL;
    
    while(data != -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        
        else{
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin>>data;
    }
    
    return head;
}

int count_length(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void print_reverse(Node* head){
    if(head == NULL){
        return;
    }
    
    print_reverse(head -> next);
    cout<<head -> data<<" ";
    return;
}

int main()
{
    Node* head = takeInput();
    print(head);
    print_reverse(head);
    
    

    return 0;
}


