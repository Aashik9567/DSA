#include<stdio.h>
#include<stdlib.h>
#define max 4
int queue[max];
int front=0,rear=-1;
void inqueue();
void dequeue();
void disp();
int main(){
	int choice,n;
	printf("1 for inqueue\n2 for dequeue\n 3 for display:\n");

while(1){

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
			exit(0);
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


1 for inqueue
2 for dequeue
 3 for display:
enter your choice:

1
enter item to insert
10
enter your choice:
1
enter item to insert
80
enter your choice:
1
enter item to insert
90
enter your choice:
1
enter item to insert
70
enter your choice:
1
queue overflow
enter your choice:
2
item dequed is 10
enter your choice:
3
item in queue at 1 position is 80
item in queue at 2 position is 90
item in queue at 3 position is 70
enter your choice:
8
invalid option:
