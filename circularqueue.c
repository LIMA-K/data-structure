#include<stdio.h>
int q[5],i,item,front=-1,rear=-1;
void enqueue(int item)
{
	if((rear+1)%5==front){
	printf("\n Queue is full");
	}
	else{
		if(rear==-1 && front==-1){
			front=(front+1)%5;
			rear=(rear+1)%5;
		}
		else{
			rear=(rear+1)%5;
		}
	    q[rear]=item;
	   
	}
}
void dequeue()
{
	if(front ==-1 && rear==-1)
	{
		printf("\n Queue is empty");
	}
    else
    {
        if(front==rear)
        {
        	printf("\n Deleted item is %d",q[front]);
        	front=-1;
        	rear=-1;
        }
        else
        {
         printf("\n Deleted item is %d",q[front]);
         front=(front+1)%5;
        }
    }
}
void display()
{
	if (front<=rear)
	{
		for(i=front;i<=rear;i++)
			printf("%d\n",q[i]);
	}
	else
	{
		for(i=front;i<=5;i++)
			printf("%d",q[i]);
		for(i=0;i<=rear;i++)
			printf("%d",q[i]);
	}
}
void main()
{
	int choice;
    do
    {
    printf("\n 1.enqueue \n 2.dequeue \n 3.display\n 4.exit\n");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("enter item to insert");
    scanf("%d",&item);
    enqueue(item);
    break;
    case  2:
    dequeue(item);
    break;
    case 3:
	display(item);
	break;
    case 4:
	printf("exit");
	break;
	defualt:printf("wrong choice");
    }
    }
    while(choice!=4);
}
