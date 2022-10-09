#include<stdio.h>
#define MAX 5
int cqueue_arr[MAX];
int front=-1;
int rear=-1;
void insert(int item)
{
	if((front==0 && rear==MAX-1)||(front==rear+1))
	{
		printf("queue overflow\n");
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
		
	}
	else
	{
		if(rear==MAX-1)
		rear=0;
		else
		rear=rear+1;
	}
	cqueue_arr[rear]=item;
}
void deletion()
{
	if(front==-1)
	{
		printf("queue under flow");
		return;
	}
	printf("element delete from queue id %d", cqueue_arr[front]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
		
	}
	else
	{
		if(front==MAX-1)
		front=0;
		else
		front=front+1;
	
	}
}

void display()
{
	int front_pos=front,rear_pos=rear;
	if(front==-1)
	{
		printf("queue is empty\n");
		return;
		
	}
	printf("queue is element: ");
	if(front_pos<=rear_pos)
	while(front_pos<=rear_pos)
	{
		printf("%d",cqueue_arr[front_pos]);
		front_pos++;
		
	}
	else {
		while(front_pos<=MAX-1)
		{
			printf("%d",cqueue_arr[front_pos]);
			front_pos++;
		}
		front_pos=0;
		while(front_pos<=rear_pos)
		{
			printf("%d",cqueue_arr[front_pos]);
			front_pos++;
			
		}
	}
	printf("\n");
}
int main()
{
	int choice,item;
	do
	{
		printf("\n1.insert\n");
		printf("\n1.delete\n");
		printf("\n1.display\n");
		printf("\n1.quit\n");
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("input the elment for insertion in queue: ");
				scanf("%d",&item);
				insert(item);
				break;
				case 2:
					deletion();
					break;
					case 3:
						display();
						break;
						default:
							printf("wrong choice\n");
		}
		
	}
	while(choice!=4);
	return 0;
}
