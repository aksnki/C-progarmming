#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*top=NULL;
void push(int value){
struct Node*newNode=(struct Node*) malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=top;
top=newNode;
}
void pop(){
if(top==NULL){
printf("stack is empty.\n");
return;
}
struct Node*temp=top;
top=top->next;
free(temp);
}
void display(){
if(top==NULL){
printf("stack is empty.\n");
return;
}
struct Node*temp=top;
printf("stack element:");
while(temp!= NULL){
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
void main(){
  int choice,value;
while(1){
 printf("Stack Menu:\n");
 printf("1.Push\n");
 printf("2.Pop\n");
 printf("3.display\n");
 printf("4.Exit\n");
 printf("enter your choice: ");
 scanf("%d",&choice);
 switch(choice){
case 1:
   printf("enter the value to push:");
   scanf("%d",&value);
   push(value);
      break;
case 2:
   pop();
   break;
case 3:
   display();
   break;
case 4:
   printf("Exiting....\n");
   exit(0);
defult:
    printf("invalid choice. please try again.\n");
}
}
}

