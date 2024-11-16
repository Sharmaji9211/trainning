#include<stdio.h>
#define MAX 5
int cqueue_arr[MAX];
int rear=-1,front=-1;
void Enqueue();
void Dequeue();
void traverse();
void Isfull();
void IsEmpty();
int main()
{
    int ch1,item;
    do
    {
        printf("\nC queue List Project!\n\n");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Traverse");
        printf("\n 4. Isfull");
        printf("\n 5. IsEmpty");
        printf("\n Enter your choice - ");
        scanf("%d", &ch1);
        switch(ch1)
        {
            case 1:
            	printf("input the element");
            	scanf("%d",&item);
                Enqueue(item);
                break;
            case 2:
                //Dequeue();
                break;
            case 3:
                //Traverse();
                break;
            case 4:
                //Isfull();
                break;
            case 5:
                //IsEmpty();
                break;
            default:
                printf("Enter valid choice !!");
        }
    }while(ch1!=4);
    return 0;
}
void Enqueue(int item){
	if((front==0 && rear==MAX-1)||(front==rear+1)){
		printf("Queue is overflow");
		return;
	}
	if(front=-1){
		front=0;
		rear=0;
	}
	else{
		if(rear==MAX-1){
			rear=0;
		}
		else{
			rear=rear-1;
		}
		cqueue_arr[rear]=item;
	}
}
void Traverse(){
	int front_pos=front,rear_pos=rear;
	if(front==-1){
		printf("queue is empty");
		return ;
	}
	printf("Queue elements :n");
	if(front_pos<=rear_pos)
	
}
