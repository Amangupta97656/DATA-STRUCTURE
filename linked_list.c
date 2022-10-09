#include<stdio.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	struct node*nxt;
}
*beg=NULL,*q,*t;
int main()
{
	int c;
	void insert();
	void display();
	void delete();
	int serach();
	clrscr();
	while(1)
	{
		printf("\n-Menu-");
		printf("\n1.insert\n2.dispaly\n3.delete\n4.search\n5.exit\n");
		printf("select our option");
		scanf("%d",&c);
		switch(c)
		{
			case 1: insert();
			break;
			case 2: display();
			break;
			case 3: delete();
			break;
			case 4: search();
			break;
			case 5: exit(0);
			break;
			default: printf("invaild choice!!");
		
		}
	}
	
}
void insert()
{
	int n;
	t=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data: ");
	scanf("%d",&n);
	t->info=n;
	if(beg==NULL)
	{
		t->nxt=NULL;
		beg=t;
	
	}
	else
	{
		t->nxt=beg;
		beg=t;
		
	}
	
}

void display()
{
	if(beg==NULL)
	{
		printf("list is empty!!");
		
	}
	else
	{
		q=beg;
		printf("the linked list elements are:\n");
		while(q!=NULL)
		{
			printf("%d->",q->info);
			q=q->nxt;
		}
	}
}
void delete()
{
	if(beg==NULL)
	{
		printf("the list is empty!!");
		
	}
	else
	{
		q=beg;
		beg=beg->nxt;
		printf("delete element is %d",q->info);
		free(q);
	}
}
int search()
{
	int svalue,i=0;
	struct node*temp;
	printf("\n serach element: ");
	scanf("%d",&svalue);
	t=beg;
	while(t!=NULL)
	{
		i++;
		if(svalue==t->info)
		{
			printf("\n searched value %d found in the location of %d ",svalue,i);
			return i;
			
		}
		t=t->nxt;
		
	}
	printf("\n not found %d in linked list ", svalue);
	return 0;
}

