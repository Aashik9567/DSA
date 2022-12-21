#include<stdio.h>
#define max 4
int queue[max];
int front=0,rear=-1;
void inqueue();
void dequeue();
void disp();
int main(){
	int choice,n,i;
	printf("1 for inqueue\n2 for dequeue\n 3 for display:\n");
	printf("no of operation :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				inqueue();
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
				disp();
				break;
			}
			default:{
				printf("invalid option:");
				break;
			}
		}
	}
}
void inqueue(){
	int element;
	if(rear==max-1){
		printf("queue overflow\n");
	}
	else{
		rear=rear+1;
		printf("enter item to insert\n");
		scanf("%d",&element);
		queue[rear]=element;
	}
}
void dequeue(){
	if(front>rear){
		printf("queue empty");
	}
	else{
		printf("item dequed is %d\n",queue[front]);
		front=front+1;
		
	}
}
	void disp(){
		int i;
		for(i=front;i<=rear;i++){
		  	printf("item in queue at %d position is %d\n",i,queue[i]);	
		}
	}
