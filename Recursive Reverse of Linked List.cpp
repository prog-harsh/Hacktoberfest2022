#include <iostream>
#include <list>

using namespace std;

class node
{

public:

  int data;
  // one pointer to the next node 
  node *next;

  // parameterized constructor for taking data stored
    node (int d)
  {

    data = d;
    next = NULL;
  }

};

void InsertAtHead (node * &head, int d)
{

  if (head == NULL)
    {

      head = new node (d);
      // new --> return the address of memory allocated dynamically
      return;
      // when you create a new node, next field automatically will be NULL
    }

  node *n = new node (d);

  n->next = head;
  head = n;

}


// function to print the linked list 
void print (node * head)
{

  while (head != NULL)
    {

      cout << head->data << " --> ";
      // update head jab tak NULL na aa jae
      head = head->next;
    }

  cout << "NULL" << endl;

}




int length(node* head)
{
    int count = 0;
    
    while(head != NULL)
    {
        
        count++;
        head = head -> next;
    }
    
    return count;
}




void InsertAtTail(node*& head, int data)
{
    // if this function runs without node so handle case 
    if(head == NULL)
    {
        
        head = new node(data);
        return;
    }

    node* tail = head;

    
    while(tail -> next != NULL)
    {
        
        tail = tail -> next;

    }

    
    tail -> next = new node(data);
    return;
    
    
}





void InsertInMiddle (node * &head, int d, int p)
{
    // handle the corner case 

    if (head == NULL || p == 0)
    {
        // linked list is not present
        
        // simply insert at the head 
        InsertAtHead(head, d);
        return;
        
    }

    else if(p > length(head))
    {

        InsertAtTail(head, d);
        
        
    }
    
    else
    // insert at middle 
    {
        // you need to reach the temp node by taking (p-1) jumps 
        int jump = 1;
        // starting the jump from head 
        node* temp = head;
        
        while(jump <= (p-1))
        {
            // temp ke paas next node ka address aa jaega means jump 
            temp = temp -> next;
            jump++;
        }
        
        // you are standing at node jaha insert karna hai 
        
        // create a new node 
        
        node* n = new node(d);
        // where the value of 4 will come in new node 
        // from the temp node --> value 2 vaali node se 
        n -> next = temp -> next;
        
        // value 2 vaali node, pointer uska new node (value 3)
        // ki position/ address store krega to make a link 
        temp -> next = n;
        
    }
    

}


void deleteHead(node*& head)
{
    if(head == NULL)
    {
        // no element, so just return
        return;
        
    }

    node* temp = head -> next;

    delete head;
    // still head main meh rhega becoz main meh head hai humara
    
    head = temp;
    // temp is local variable, so it will get destroyed after function call
    
}




node* take_input(node*&head)
{
    int data;
    cin >> data;
    
    // pass by reference toh no need 
    //node* head = NULL;
    while(data!= -1)
    {
        
        InsertAtHead(head, data);
        cin >> data;
    }
    
    return head;
    
}

node* take_input2()
{
    // keep a data pointer
    int data;
    // you take input and keep on inputting data from user
    cin >> data;
    
    // create a head cz add data in Linked List 
    node* head = NULL;
    
    while(data!= -1)
    {
        
       // InsertAtHead(head, data);
       InsertAtTail(head, data);
        cin >> data;
    }
    
    return head;
    
}



// operator overloading for simple print
ostream& operator<< (ostream &os, node* head)
{
    // print the entire linked list 
    print(head);
    return os;
}

istream& operator >> (istream &is, node*& head)
{
    // head is equated becoz return type of input is node*
    head = take_input2();
    return is;
    
}



void reverse(node*&head)
{
    node* current = head;
    node* prev = NULL;
    node* next = NULL;

    while(current!=NULL)
    {
        // store the node data 2 otherwise lost ho jaega if current -> next = prev kiya
        
        next = current -> next;
        
        // nodes direction are changed
        current -> next = prev;
        
        // now before incrementing the current, store 2 otherwise gyb address
        prev = current;
        
        // for traversal
        current = next;
        // or use current = next;
        // current = next se address lose toh prev zruri
        // current = current -> next se iterate
        
        
    }
    
    // update the head 
    // current is time, NULL par hai 
    head = prev;
    
}



node* RecursiveReverse(node* head)
{

    if(head -> next == NULL || head == NULL)
    {
        return head;
    }

    node* shead = RecursiveReverse(head -> next);

    
    
    node* temp = shead;
    
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    
    head -> next = NULL;
    temp -> next = head;
    
    // return small head 
    return shead;
    
}


node* OptimizeRecursiveReverse(node* head)
{
    if(head -> next == NULL || head == NULL)
    {
        return head;
    }
    
    // in recursive case, you need to make a call on smaller part of list 
    // ask recursion to do reverse on smaller part 
    node* shead = RecursiveReverse(head -> next);
    // it gives you small head 
    
    // directly pta hai hume 
    node* temp = head -> next;
    // or head -> next -> next = head 
    
    head -> next = NULL;
    temp -> next = head;
    
    
    // return small head 
    return shead;
    
}



int main ()
{
  
  
  // till -1 nhi aa jaata insert in list 
  node* head = NULL;
  cin >> head;
  cout << "List is: ";
  cout << head;
  
  head = OptimizeRecursiveReverse(head);
  cout << "Reverse list: ";
  cout << head;
  
  return 0;
}


/*

OUTPUT

1 2 3 4 5 -1
List is: 1 --> 2 --> 3 --> 4 --> 5 --> NULL
Reverse list: 5 --> 4 --> 3 --> 2 --> 1 --> NULL


*/


