#include <stdio.h>
#include<stdlib.h>
char a[100];
struct sll
{
	int data;
	struct sll *next;
}*head=NULL,*temp,*newn;
void create(char d)
{
	newn=(struct sll *)malloc(sizeof(struct sll));
	newn->data=d;
	newn->next=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		temp=head;
		head=newn;
		head->next=temp;
	}
}
int rev(struct sll *head)
{
	if(head==NULL)
	return 0;
	else
	{
		rev(head->next);
		
	}
}
void print()
{
	
	temp=head;
	while(temp->next!=NULL)
	{
	printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void main()
{
	int i;
    int a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	  create(a[i]);
	}
	rev(head);
	print();
	return 0;
}
