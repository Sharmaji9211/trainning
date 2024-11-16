#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList* next;
};
struct LinkedList *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void exit();
void atEnd();
void atBeg();
void atPosition();
void addAfter();
void addBefore();
void delBeg();
void delEnd();
void delBefore();
void delAfter();
void delPosition();


int main()
{
    int ch1;
    char choice = 'y';
    start = NULL;
    system("cls");
    do
    {
        printf("\nLinked List Project!\n\n");
        printf("\n 1. INSERT");
        printf("\n 2. DISPLAY");
        printf("\n 3. DELETE");
        printf("\n 4. EDIT");
        printf("\n 5. COUNT NODES");
        printf("\n 6. SORTING");
        printf("\n 7. REVERSE");
        printf("\n 8. EXIT");
        printf("\n Enter your choice - ");
        scanf("%d", &ch1);
        switch(ch1)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                //del();
                break;
            case 4:
                //edit();
                break;
            case 5:
                //count();
                break;
            case 6:
                //sort();
                break;
            case 7:
                //reverse();
                break;
            case 8:
                choice = 'n';
                break;
            default:
                printf("Enter valid choice !!");
        }
    }while(choice == 'y');
    return 0;
}

void insert()
{
    int ch2;
    char choice = 'y';
    do
    {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. ADD AFTER");
        printf("\n 5. ADD BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch2);
        switch(ch2)
        {
            case 1:
                atBeg();
                break;
            case 2:
                atEnd();
                break;
            case 3:
                //atPosition();
                break;
            case 4:
                //addAfter();
                break;
            case 5:
                //addBefore();
                break;
            case 6:
                choice = 'n';
                break;
            default:
                printf("Enter valid choice!");
        }
    }while(choice == 'y');
}


void del()
{
    int ch3;
    char choice = 'y';
    do
    {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. DELETE AFTER");
        printf("\n 5. DELETE BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch3);
        switch(ch3)
        {
            case 1:
                //delBeg();
                break;
            case 2:
                //delEnd();
                break;
            case 3:
                //delPosition();
                break;
            case 4:
                //delAfter();
                break;
            case 5:
                //delBefore();
                break;
            case 6:
                choice = 'n';
                break;
            default:
                printf("Enter valid choice!");
        }
    }while(choice == 'y');
}

void atBeg()
{
	struct LinkedList *temp,*node;
	node=(struct LinkedList*)malloc(sizeof(struct LinkedList));
	printf("\n\n enter a no.");
	scanf("%d",&node->data);
	node->next=NULL;
	if(start==NULL)
	{
		start=node;
		return;
	}
	else
	{
		temp=start;
		start=node;
		node->next=temp;
	}
}
void display()
{
	
	if(start==NULL)
	{
		printf("linklist is empty");
	}
	else
	{
    	struct LinkedList *temp;
	    temp=start;
	   while(temp !=NULL)
    	{
		printf("%d-->",temp->data);
		temp=temp->next;
	    }
    }
	
}
void atEnd()
{
   struct LinkedList *temp,*node;
	node=(struct LinkedList*)malloc(sizeof(struct LinkedList));
	printf("\n\n enter a no.");
	scanf("%d",&node->data);
	node->next=NULL;
	
	if(start==NULL)
	{
		start=node;
		return;
	}
	else
	{
		temp=start;
		 while(temp->next !=NULL)
		 {
		 	temp->next=temp;
		 }
		 temp ->next=node;
	}
	
}

