/*
Uncompleted due to time issues.
*/

#include <stdio.h>
#include <stdlib.h>
int size=0;
typedef struct link
{
   int data;
   struct link *next;
}node;
node *head=NULL;

void ins_f()
{
	node *new=(node*)malloc(sizeof(node));
	new->next=head;
	printf("Enter value : ");
	scanf(" %i",&new->data);
	head=new;
	size++;
}

void ins_e()
{
	node *new=(node*)malloc(sizeof(node)),*temp=head;
	if(head==NULL)
    {
        printf("Enter value : ");
        scanf(" %i",&new->data);
        new->next=NULL;
        head=new;
        size++;
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

void ins_s()
{
	printf("\nCurrently unavailable.\n");
}

void del_f()
{
	if(head==NULL)
	{
		printf("\nList is already empty.\n");
		return;
	}
	node *temp=head;
	int x=temp->data;
	head=head->next;
	free(temp);
	printf("Data : %i\nFront element deleted succesfully.\n",x);
    size--;
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
        size--;
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

void del_s()
{
	printf("\nCurrently unavailable.\n");
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

void arrange()
{
    if(head==NULL)
    {
        printf("\nNo elements for shorting.\n");
        return;
    }
    int tmp[size],i=0,k,z,choice;
    node *temp=head;
    while(temp!=NULL)
    {
        tmp[i]=temp->data;
        temp=temp->next;
        i++;
    }

    for(i=0;i<size;i++)
    {
        for(k=i;k<size;k++)
        {
            if(tmp[i]>tmp[k])
            {
                z=tmp[i];
                tmp[i]=tmp[k];
                tmp[k]=z;
            }
        }
    }

    temp=head;
    system("cls");
    printf("\n1.Ascending     2.Descending\n-----------     ------------\n\n");
    scanf(" %i",&choice);
    if(choice==1)
    {
        for(i=0;i<size;i++)
        {
            temp->data=tmp[i];
            temp=temp->next;
        }
        printf("\nData sorted successfully.\n\n");
    }
    else if(choice==2)
    {
        for(i=(size-1);i>=0;i--)
        {
            temp->data=tmp[i];
            temp=temp->next;
        }
        printf("\nData sorted successfully.\n\n");
    }
    else
        printf("\nEnter valid choice.");
}

int main()
{
	int w;
	printf("\nLink list program\n---- ---- -------\ncredit: everyone\n------- --------\n\nFor exit press 0.\n");
	for(;;)
	{
	    printf("\nSelect operation :\n\n1.Insert at Beginning    2.Insert at Ending       3.Insert after specific\n-------- -- ---------    -------- -- ------       -------- ----- --------\n4.Delete from Beginning  5.Delete from Ending     6.Delete from specific\n-------- ---- ---------  -------- ---- ------     -------- ---- --------\n7.Display                8.Sorting the list\n---------                --------- --- ----\n\n");
	    scanf(" %i",&w);
	    if(w==0) break;
	    system("cls");
        switch(w)
        {
            case 1: ins_f(); break;
            case 2: ins_e(); break;
            case 3: ins_s(); break;
            case 4: del_f(); break;
            case 5: del_e(); break;
            case 6: del_s(); break;
            case 7: print(); break;
            case 8: arrange(); break;
            default: printf("\nEnter valid choice.\n\n");
        }
	}
	return 0;
}
