#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


struct node *create_tree(struct node *,int);
int count=0;

struct node {
int data;
struct node *lnode;
struct node *rnode;
};

struct node *root=NULL,*rt;
int flag=0;

int display(struct node *);

int main()
{


int num,val;


 while(1){
    printf("Choice options\n");
    printf("1. Insert\n");
    printf("2. Display\n");
    printf("3. Deletion\n");
    printf("4. Exit\n");
    scanf("%d",&num);   

  switch(num){

   case 1:
          printf("Enter the data");
          scanf("%d",&val);
          root=create_tree(root,val);
          break;
   case 2:
         printf("Data \n");
          display(root);
          break;
   case 3:
         printf("Under construction\n");
          break;
   case 4:
         exit(0);
          break;

  }
 }
return 0;
}



struct node *create_tree(struct node *temp,int val){

      if(temp == NULL){
     
      temp=(struct node *)malloc(sizeof(struct node));

       /*if(flag==0){

       rt=temp;
      flag=1;
      }*/

      temp->data=val;
      temp->lnode=NULL;
      temp->rnode=NULL;
      count++;
      printf("Data inserted successfull\n");
      }else if(count%2 == 0){
         temp->lnode = create_tree(temp->lnode,val);
    }else if(val < temp->data){
         temp->rnode = create_tree(temp->rnode,val);
   }

return temp;
}



int display(struct node *root){
 
   if(root != NULL){

     display(root->lnode);
     printf(" %d",root->data); 
     display(root->rnode);  
    
  }

return 0;
}


