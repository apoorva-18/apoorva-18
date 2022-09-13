#include<stdio.h>
#include<conio.h>
#define MAX 10

int queue[MAX],front=0,rear=0;
void insert_element();
void delete_element();
void display_queue();

int main()
{
  int option;
  printf(".......C++ program to implement Circular Queue operations......");
  do
  {
   printf("\n\n 1. Insert an element (Enqueue)");
   printf("\n 2. Delete an element (Dequeue)");
   printf("\n 3. Exit");
   printf("\n Enter your choice: ");
  scanf("%d",&option);
   switch(option)
   {
     case 1: insert_element();
              break;
     case 2: delete_element();
             break;
     case 3: return 0;
   }
 }
 while(option!=3);
 return -1;
}
void insert_element()
{
  int num;
  printf("\n Enter the number to be inserted: ");
  scanf("%d",&num);
  int next=(rear%(MAX-1))+1;
  if(next==front)
    printf("\n Queue OverFlow Occured");
  else if(front==0&&rear==0)
  {
      front=rear=1;
      queue[rear]=num;
  }
  else
  {
    rear=next;
    queue[next]=num;
  }
}

void delete_element()
{
  int element;
  if(front==0)
      printf("\n Queue Empty. Underflow");
  element=queue[front];
  if(front==rear)
     front=rear=0;
  else
  {
    int next=(front%(MAX-1))+1;
    front=next;
  }
  printf("\n The deleted element is: %d",element);
}

