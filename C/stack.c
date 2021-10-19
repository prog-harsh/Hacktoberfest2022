#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10
int stack[CAPACITY],top=-1;
int* sp = stack;

void push(int);
void pop();
void display();

void main(){
    int ch,element;
    printf("\n1.Push element \n2.Pop Element \n3.Display \n4.Exit\n");
    
    while(1){
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : 
                printf("\nEnter the element to be pushed : ");
                scanf("%d",&element);
                push(element);
                break;

            case 2 : 
                pop();
                break;

            case 3 : 
                display();
                break;

            case 4 : 
                exit(0);

            default : 
                printf("\nWrong choice!");
        }
    }
}

void push(int element){

    if(top==CAPACITY-1)
        printf("\nStack Overflow!");
    else  {
        top++;
        *(stack+top)=element;
        printf("%d is pushed to the stack",element);
        display();
    }  
}

void pop(){
    if(top==-1)
        printf("\nStack Underflow!");
    else {
        printf("\n%d is popped from the stack",*(stack+top));
        top--;
        display();
    }       
}

void display(){
    if(top==-1)
        printf("\nStack is empty");
    else{
        printf("\nThe stack now contains\n");
        for(int i=top ; i>=0 ; i--)
            printf("%d\n",*(stack+i));
    }    
}
