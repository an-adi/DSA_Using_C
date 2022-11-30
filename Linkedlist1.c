//Create, Delete , Insert at position, delete at position 

#include<stdio.h>
#include<stdlib.h> // malloc() definition stored by this library
struct node 
 {
  int data;
  struct node *next;
 };
// createNode function defined to create new node.....
struct node* createNode()
 {
     struct node* newnode=NULL;
     newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
      { 
         printf("The memory is not allocated"); //It shows messeage on consol
      }
    else  
     {
         int val;
         printf("Enter the value of the data:\n");
         scanf("%d",&val);
         newnode->data=val;
         newnode->next=NULL;
      }
    return newnode;
}

//  // createLinkedList function is started  switch case 1
void createLinkedList(struct node **head)
 {
    struct node *tempnode=NULL, *travnode = *head;
    tempnode=createNode(); //tempnode is stores address of the new next node to be added in linked list
    if(*head==NULL) //*head have the address of first node 
     {
       *head=tempnode;
     }
     else
     {
      while(travnode->next!=NULL) //travnode is used to travers linkedlist
       {
        travnode=travnode->next;
        }
     travnode->next=tempnode;
    }
}

void displayLinkedList(struct node * begin) //for swtichcase 2
 {
  if(begin==NULL)
   {
    printf("Linked list is not available"); //shows on consol if likedlist is empty
   }
  else
 {
   while(begin!=NULL)
     {
       printf("%d ->", begin->data);
       begin=begin->next;
     }
  }
}
void insertAtBegaining(struct node **head) //switch case 3
{
 struct node *tempnode=NULL;
    tempnode = createNode();
    tempnode->next=*head;
    *head=tempnode;
}

void insertAtLast(struct node **head) // switch case 4
  {
     createLinkedList(head);
  }

int countNode(struct node *head)
 {
int count=0;
   while(head!=NULL) 
   {
      count++;
     head=head->next;
    }
return count;
}

void insertAtPosition(struct node **head) // switch case 5 add value at desire position 
 {
  struct node *tempnode=NULL,*travnode=*head;
  int pos,n;
  printf("Enter at which position you want to add the data:\n");
 scanf("%d",&pos);
n=countNode(*head);
  if(pos==1)
   {
      insertAtBegaining(head);
    }
   else if(pos==n+1)
    {
       insertAtLast(head);
    }
   else if(pos<1 || pos>n+1)
    {
        printf("Enter the valid position");
    }
    else 
    {
     int i;
       tempnode=createNode();
       for(i=1;i<pos-1;i++)
        {
          travnode=travnode->next;
        }
        tempnode->next=travnode->next;
        travnode->next=tempnode;
    }
 }

 void deletionAtFirst(struct node **head) //switch case 6 delete node at first
  {
  if(*head==NULL)
  {
     printf("Linked List is not available");
  }
 else if((*head)->next==NULL)
  {
      free(*head);
     *head=NULL;
  }
 else 
{
  struct node *temp=*head;
  *head=(*head)->next;
   free(temp);
}
}

void deletionAtEnd(struct node **head) //switch case 7 delete at the end
  {
   struct node *travnode=*head;
     if(*head==NULL)
    {
        printf("Linked List is not available");
    }
    else if((*head)->next==NULL)
      {
       free(*head);
      *head=NULL;
      }
     else
       {
           while(travnode->next->next!=NULL)
            {
               travnode=travnode->next;
            }
         free(travnode->next);
         travnode->next=NULL;
        }
}
void deletionUsingTwoPointer(struct node **head) //switch case 8 it will delete the value at enter position and also insert new value enter by user
  {
    struct node *t1=*head,*t2=*head,*temp=NULL;
    int n=countNode(*head);
   if(*head==NULL)
    {
      printf("Linked list is not available");
     }
    else if(t1->next==NULL)
     {
	*head=NULL;
      }
    else if((*head)->next->next==NULL)
     {
       free(t1->next);
       t1->next=NULL;
     }
    else if(t1->next!=NULL)
     {
     while(t2->next!=NULL)
     {
     t1=t1->next;
     t2=t1->next;
    }
   free(t2);
  t1->next=NULL;
  }
}

void deleteAtPosition(struct node **head) // switch case 9 it will delete value at desired position 
{
struct node* temp=*head,*travnode=NULL;
int pos,n,count=0;
n=countNode(*head);
printf("Enter the position where you want to delete:\n");
scanf("%d",&pos);
if(*head==NULL)
{
printf("Linked List is not available");
}
else if(pos<1 || pos>n+1)
{
 printf("Enter the valid choice");
}
else if((*head)->next==NULL)
{
deletionAtFirst(head);
}
else if(pos==n)
{
deletionAtEnd(head);
}
else
{
  while(count+1!=pos)
   {
      temp=temp->next;
       count++;
    }
 travnode=temp->next;
 
}

}
void main(void)
{
   struct node *firstnode=NULL;
   int choice;
do
  {
	  printf("\n\t\t\t\t\tOperation On Linked List\n");
  printf("\n1.Create Linked List");
  printf("\n2.Display Linked List");
  printf("\n3.Insert At Last Position");
  printf("\n4.Insert At Begaining Of Linkedlist");
  printf("\n5.Insert At Position You Want");
  printf("\n6.Delete Value At First Position");
  printf("\n7.Delete At End Position");
  printf("\n8.Delete and Insert New Value At Position You Want");
  printf("\n9.Delete At Position You Want");
  printf("\n10.Exit The Screen");
 
	  printf("\nEnter the choice you want :\n");
  scanf("%d",&choice);
printf("\n");
  switch(choice)
   {
    case 1: createLinkedList(&firstnode);
           break;
    case 2: displayLinkedList(firstnode);
           break;
    case 3: insertAtLast(&firstnode);
           break;
    case 4:insertAtBegaining(&firstnode);
          break;
    case 5:insertAtPosition(&firstnode);
           break;
    case 6:deletionAtFirst(&firstnode);
           break;
    case 7:deletionAtEnd(&firstnode);
           break;
    case 8:deletionUsingTwoPointer(&firstnode);
           break;
    case 9:deleteAtPosition(&firstnode);
           break;
    case 10: exit(0) ;//it is for normal termination of the programme ........ if we uses exit(-1) its called abnormal termination
           break;
    default:
    printf("Enter the valid choice"); //this shows error msg when user enters wrong choice
   }
  } while(choice!=0);  //do while loop is closed 
}