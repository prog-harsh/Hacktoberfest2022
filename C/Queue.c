#include <stdlib.h>
#include <stdio.h>
# define MAX 100
int array[MAX];
int Rear = - 1;
int Front = - 1;
void enqueue()
{
    int value;
    if (Rear == MAX - 1)
       printf("Overflow is there \n");
    else
    {
        if (Front == - 1)
       
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &value);
        Rear = Rear + 1;
        array[Rear] = value;
    }
} 
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow is there\n");
        return ;
    }
    else
    {
        printf("Element is  deleted from the Queue: %d\n", array[Front]);
        Front = Front + 1;
    }
} 
void show()
{
     
    if (Front == - 1)
        printf("Queue is Empty \n");
    else
    {
        printf("Queue is : \n");
        printf("............. \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", array[i]);
        printf("\n");   
        printf("............. \n");

        printf("\n");
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choiceoice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Please Enter a valid option\n");
        } 
    } 
} 
  

  

  
