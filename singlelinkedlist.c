#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header = null;
struct node *newnode;
struct node *ptr;
struct node *ptr1;
void insert_at_front(int key)
{
	if(header==null)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=null;
		header=newnode;
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=null;
		header=newnode;
	}
}
void insert_at_end(int key)
{
	if(header==null)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=null;
		header=newnode;
	}
	else
	{
		ptr=header;
		while(ptr->link!=null)
		{
			ptr=ptr->link;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=null;
		ptr->link=newnode;
	}
}
void insert_at_anypart(int key,int val)
{
	if(header==null)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=null;
		header=newnode;
	}
	else
	{
		ptr=header;
		while(ptr!=null && ptr->data!=val)
		{
			ptr=ptr->link;
		}
		if(ptr==null)
		{
			printf("key is not found");
		}
		else
		{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->link=ptr->link;
		ptr->link=newnode;
	}
}
}
void delete_at_front()
{
	ptr=header;
	if(ptr==null)
	   {
		  printf("list is empty");
		}
	else
		{
		header=ptr->link;
		free(ptr);
	    }
}
void delete_at_end()
{
	ptr=header->link;
	if(ptr==null)
	   {
		  printf("list is empty");
		}
	else
		{
		 while(ptr->link!=null)
		 {
		 	ptr1=ptr;
		 	ptr=ptr->link;
		 }
		 ptr1->link=null;
		 free(ptr);
}	    }
void delete_at_any(int key)
{
	ptr=header->link;
	ptr1=header;
	while(ptr!=null)
	   {
	   	 if(ptr->data==key)
	   	   {
	   		ptr1->link=ptr->link;
	   		free(ptr);
	   		break;
	   	    }
	   	  else
	       {
            ptr1=ptr;
            ptr=ptr->link;
	   	    }
	    }
	    if(ptr==null)
	    {
	    	printf("no key found");
	    }
}
int search(int key)
{
	int location=1;
	ptr=header;
	while(ptr!=null)
	{
		if(ptr->data==key)
		{
			printf("location:%d",location);
		}
		else
		{
			ptr=ptr->link;
			location=location+1
		}
	}
  if(ptr==null)
    {
	printf=("key is not found");
    }
}
void display()
{
	ptr=header;
	if(ptr==null)
	{
		printf("linked list is empty");
	}
	else
	{
		printf("elements in the list");
		while(ptr!=null)
		{
			printf("%d",ptr->data);
            ptr=ptr->link;
	    }
    }
}
void main()
{
	int choice,key,val;
	do
	 {
    printf("\n 1.insert front \n 2.insert end \n 3.insert any part\n 4.delete front\n 5.delete end\n 6.delete any part\n,7.display\n 8.search \n 9.exit" );
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("enter item to insert");
    scanf("%d",&key);
    insert_at_front(key);
    break;
    case  2:
    printf("enter item to insert");
    scanf("%d",&key);
    insert_at_end(key);
    break;
    case 3:
	display();
	break;
    case 4:
	printf("enter item to insert");
    scanf("%d",&key);
    printf("enter position");
    insert_at_anypart(key,val);
	break;
	case 5:
    delete_at_front(key);
	break;
	case 6:
	printf("enter item to insert");
    scanf("%d",&key);
    delete_at_any(key);
	break;
	case 7:
    display(key);
	break;
    case 8:
	printf("enter item to insert");
    scanf("%d",&key);
    printf("enter position");
    search(key);
	break;
    case 9:
	printf("exit");
	break;
    }
	defualt:printf("wrong choice");
      }
  while(choice!=4);
}

	
