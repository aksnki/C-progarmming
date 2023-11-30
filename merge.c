#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next
};
struct node *f=NULL;
struct node *r=NULL;
void enqueue(int d){
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->data=d;
n->next=NULL;
if((r==NULL)&&(f==NULL)){
f=r=n;
r->next=f;
}
else{
r->next=n;
r=n;
n->next=f;
}
}
void dequeue(){
struct node*t;
t=f;
if((f==NULL)&&(r==NULL))
printf("\n queue is empty");
else if(f==r){
f=r=NULL;
free(t);
}
else{
f=f->next;
r->next=f;
free(t);
}
}
int i;
int search(int value)
{
if(f<=r)
{
while(i<=r)
{
if(queue[i]==value)
{
printf("entered %d foundat %d.\n",value,i);
return i;
}
}
i++;
}
}
else
{
while(queue[i]==value)
{
printf("element %d found at index %d.\n",value,i);
return i;
}
i++;
}
i=0;
while(i<=r)
{
if(queue[i]==value)
{
printf("elemnets %d found at bindex %d.\n",value,i);
return i;
}
i++;
}
}
printf("element %d found in the queue.\n,vale,i");
return -1;
}
void display() {
struct node*t;
t=f;
if((f==NULL)&&(r==NULL))
printf("\n Queue is empty");
else{
do{
printf("\n%d\n",t->data);
t=t->next;
}
while(t!=f);
}
}
void main()
{
int choice,g,value;
while(1)
{
     printf("circular queue Menu:\n");
     printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");
     printf("enter your choice");
     scanf("%d",&choice);
switch(choice)
{
case 1:
      printf("enter the value to be inserted:");
      scanf("%d",&value);
      enqueue(value);
break;
case 2:
      dequeue();
break;
case 3:
      printf("enter the value to be search:");
      scanf("%d",&value);
      search(value);
break;
case 4:
      display();
break;
case 5:
      printf("exiting....");
      exit(0);
default:
      printf("invalied choice! please try again\n");
}
}
}

         
