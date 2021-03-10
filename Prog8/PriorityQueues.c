#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void insert(int data);
void delete(int data);
void create();
void display();
void check(int data);

int pq[MAX];
int front,rear;

int main()
{
    int n,ch;
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    create();
    while(1)
    {
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter data to be inserted: ");
                    scanf("%d",&n);

                    insert(n);
                    break;
            case 2: printf("Enter data to be deleted: ");
                    scanf("%d",&n);

                    delete(n);
                    break;
            case 3: display(n);
                    break;
            case 4: exit(0);
                    break;
            default:print("Wrong input try again");
                    break;


        }

    }

    return 0;
}
void create()
{
    front=-1;
    rear=-1;
}
void insert(int data)
{
    if(rear >= MAX-1)
    {
        printf("Overflow cant enter more data");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        pq[rear] = data;
        return;
    }
    else
    {
        check(data);
        
    }
    rear++;
    
    
}
void check(int data)
{
    int i,j;
    for(i=0;i <= rear;i++)
    {
        if(data >= pq[i])
        {
            for(j=rear+ 1; j>i ; j--)
            {
                pq[j]=pq[j-1];

            }
            pq[i]=data;
            return;
        }
    }
    pq[i]=data;
}
void delete(int data)
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty cant delete");
        return;
    }
    for(i=0;i<=rear;i++)
    {
        if(data == pq[i])
        {
            for(;i<=rear;i++)
            {
                pq[i]=pq[i+1];
            }
            pq[i] = -99;
        rear--;
 
        if (rear == -1) 
            front = -1;
        return;
        }
    }
    printf("value u enetered isnt in queue");
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
        return;
    }
    for(; front <= rear ; front++)
    {
         printf("%d",pq[front]);

    }
    front=0;
}
