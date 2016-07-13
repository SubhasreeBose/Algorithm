#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int value;
struct node *ptr;
}
Node;
Node *root=NULL;
void display(Node * temp)
{
while(temp!=NULL)
{

    printf("%d",temp->value);
    temp=temp->ptr;
}
}
int main()
{
Node* temp,*root1,*root2,*temp1,*temp2;
int k=0;
root=(Node*)malloc(sizeof(Node));
root->value=5;
root->ptr=NULL;

temp=(Node*)malloc(sizeof(Node));
temp->value=1;
temp->ptr=NULL;

root->ptr=temp;
temp1=(Node*)malloc(sizeof(Node));
temp1->value=4;
temp1->ptr=NULL;
temp->ptr=temp1;
temp=temp1;
temp1=(Node*)malloc(sizeof(Node));
temp1->value=3;
temp1->ptr=NULL;
temp->ptr=temp1;
temp=temp1;
temp1=(Node*)malloc(sizeof(Node));
temp1->value=9;
temp1->ptr=NULL;
temp->ptr=temp1;
temp=temp1;
display(root);
printf("\n");
temp=root;
root1=root;
root2=root->ptr;
temp1=root1;
temp2=root2;

while(temp->ptr!=NULL)
{
   k++;

   if(k%2==0)
   {

    temp2->ptr=temp1->ptr;
    temp2=temp2->ptr;


   }
   else
   {



    temp1->ptr=temp2->ptr;
    temp1=temp1->ptr;

   }
   temp=temp->ptr;


}
temp1->ptr=NULL;
temp2->ptr=NULL;

temp=root1;
while(temp->ptr!=NULL)
{

    temp=temp->ptr;
}
temp->ptr=root2;
display(root1);
return 0;
}
