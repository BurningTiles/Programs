#include <stdio.h>
#include <stdlib.h>
int size=0;
typedef struct link
{
   int data;
   struct link *next;
}node;
node *head=NULL;
void ins_e()
{
	node *new=(node*)malloc(sizeof(node)),*temp=head;
	if(head==NULL)
    {
        printf("Enter value : ");
        scanf(" %i",&new->data);
        new->next=NULL;
        head=new;
        return;
    }
    while(temp->next!=NULL)
	    temp=temp->next;
	new->next=temp->next;
	temp->next=new;
	printf("Enter value : ");
	scanf(" %i",&new->data);
	size++;
}
void del_e()
{
	if(head==NULL)
	{
		printf("\nList is already empty.\n");
		return;
	}
    if(head->next==NULL)
    {
        int x=head->data;
        free(head);
        head=NULL;
        printf("Data : %i\nRear element deleted succesfully.\n",x);
        return;
    }
	node *temp=head,*prev=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	int x=temp->data;
	prev->next=NULL;
	free(temp);
	printf("Data : %i\nRear element deleted succesfully.\n",x);
	size--;
}
void print()
{
    if(head==NULL)
    {
        printf("\nList is empty.");
        return;
    }
	node *temp=head;
	int index=1;
	printf("\nThere are %i elements in list.\n\nIndex  Value\n-----  -----\n",size);
	while(temp!=NULL)
	{
		printf("%5i  %5i\n",index++,temp->data);
		temp=temp->next;
	}
}

int main()
{
	int w;
	printf("\nFor exit press 0.\n--- ---- ----- --\n\n");
	for(;;)
	{
	    printf("\nSelect operation:\n------ ----------\n\n1.Push         2.POP          3.Display\n------         -----          ---------\n");
	    scanf(" %i",&w);
	    if(w==0) break;
	    system("cls");
        switch(w)
        {
            case 1: ins_e(); break;
            case 2: del_e(); break;
            case 3: print(); break;
            default: printf("\nEnter valid choice.\n\n");
        }
	}
	return 0;
}
