#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;

struct node *ptr=NULL;
struct node *temp=NULL;
int data;
void insert_beg();
void insert();
void insert_end();
void delete_beg();
void delete();
void delete_end();
void display();
int pos;
int main(){
     int a;
    while(1){
        printf("\n1.Insertion at beggining\n2.Insertion at specified position\n3.Insertion at end\n4.Deletion at begining\n5.Deletion at specified pos\n6.Deletion at end\n7.Display\n");
        printf("Enter operation you want to perform::\n-->");
        scanf("%d",&a);
        switch(a){
            case 1:
                insert_beg();
                system("clear");
                break;
            case 2:
                insert();
                system("clear");
                break;
            case 3:
                insert_end();
                system("clear");
                break;
            case 4:
                delete_beg();
                system("clear");
                break;
            case 5:
                delete();
                system("clear");
                break;
            case 6:
                delete_end();
                system("clear");
                break;
            case 7:
                display();
                break;
            default:
                exit(0);
        }
 }
}
void insert_beg(){
    struct node *newnode;
     printf("enter data to insert:\n-->");
    scanf("%d",&data);
    newnode=(struct node *)malloc (sizeof(struct node));
    newnode->info=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        main();
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void insert_end(){
    struct node *newnode;
     printf("enter data to insert:\n-->");
    scanf("%d",&data);
    newnode=(struct node *)malloc (sizeof(struct node));
    newnode->info=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        
        }
        ptr->next=newnode;
        newnode->prev=ptr;
        }
}
void insert(){
    struct node *newnode;
    printf("enter data to insert:\n-->");
    scanf("%d",&data);
    newnode=(struct node *)malloc (sizeof(struct node));
    newnode->info=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    printf("Enter position at which u want to insert:\n-->");
    scanf("%d",&pos);
    ptr=head;
    for(int i=0;i<pos-1;i++){
      ptr=ptr->next;
      if(ptr==NULL){
        printf("position not found\n");
      }
    }
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next->prev=newnode;
    ptr->next=newnode;
    
}
void delete_beg(){
    if(head==NULL){
        printf("list empty\n");
        return;
    }
    
   ptr=head;
   head=head->next;
   head->prev=NULL;
   free(ptr);
}
void delete_end(){
  if(head==NULL){
        printf("list empty\n");
        return;
    } 
    else if(head->next==NULL){
        ptr=head;
        head=NULL;
        printf("deleted iten is:\n-->%d",ptr->info);
        free(ptr);
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        printf("deleted iten is:\n-->%d",ptr->info);
        free(ptr);
    } 
}
void delete(){
    
    if (head == NULL) {
        printf("list empty\n");

    }
    printf("enter position at which u want to delete:\n-->");
    scanf("%d", &pos);
    if (pos == 0) {
        ptr = head;
        head = head->next;
        head->prev=NULL;
        printf("deleted item is :%d\n-->", ptr->info);
        free(ptr);

    } else {
        ptr = head;
        for (int i = 0; i < pos; i++) {
           
            ptr = ptr->next;
            if (ptr == NULL) {
                printf("position not found:");
                main();
            }
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev=ptr->prev; 
        free(ptr);
    }
}
void display(){
    int i=0;
    system("clear");
    ptr=head;
    if(ptr==NULL)
    {
        printf("list empty:");
    }
    else{
        //ptr=head;
        printf("the element in the list is:\n");
        while(ptr!=NULL){
            //printf("\n");
            printf("node[%d]->%d\n",i,ptr->info);
            i++;
            ptr=ptr->next;
        }
    }
}
