//link_list program for mac::
#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *next;
};
struct node *head;
struct node *ptr=NULL;
struct node *newnode;
struct node *temp=NULL;
void insert_beg();
void insert();
void insert_end();
void delete();
void delete_beg();
void delete_end();
void disp();
int data;
int main(){
    int a;
    while(1){
        printf("1.for insertion at beggining\n2.for insertion at specified position\n3.for insertion at end\n4.for deletion at begining\n5.deletion at specified pos\n6.deletion at end\n7.for display\n");
        printf("enter operation you want to perform::\n");
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
                disp();
                break;
            default:
                exit(0);
        }
    }

}
void insert_beg(){
    printf("enter data to insert:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info =data;
    if(head==NULL){
        head=newnode;

    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void insert_end(){
    printf("enter data to insert:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info =data;
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
    }
}
void insert(){
    int pos;
    printf("enter data to insert:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info =data;
    printf("enter position at which u want to insert::");
    scanf("%d",&pos);
    ptr=head;
    for(int j=0;j<pos-1;j++){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("position not found:");
            return ;

        }
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void delete_beg(){
    ptr=head;
    if(head==NULL){
        printf("list empty\n");
    }
    else{
        //ptr=head;
        printf("deleted item::%d\n",ptr->info);
        head=ptr->next;
        free(ptr);
    }
}
void delete_end(){
    if(head==NULL){
        printf("list empty\n");
    }
    else if(head->next==NULL){
        ptr=head;
        head=NULL;
        printf("deleted item is :%d",ptr->info);
        free(ptr);

    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
            temp->next=NULL;
            printf("deleted item is :%d\t",ptr->info);
            free(ptr);

        }
    }
}
void delete() {
    int pos;
    if (head == NULL) {
        printf("list empty\n");

    }
    printf("enter position at which u want to delete::");
    scanf("%d", &pos);
    if (pos == 0) {
        ptr = head;
        head = head->next;
        printf("deleted item is :%d", ptr->info);
        free(ptr);

    } else {
        ptr = head;
        for (int i = 0; i < pos; i++) {
            temp = ptr;
            ptr = ptr->next;
            if (ptr == NULL) {
                printf("position not found:");
            }
        }
        temp->next = ptr->next;
        free(ptr);
    }
}
void disp(){
    int i=0;
    system("clear");
    ptr=head;
    if(ptr==NULL)
    {
        printf("list empty:");
    }
    else{
        //ptr=head;
        printf("the element in the list is::\n");
        while(ptr!=NULL){
            //printf("\n");
            printf("node[%d]->%d\n",i,ptr->info);
            i++;
            ptr=ptr->next;
        }
    }
}
