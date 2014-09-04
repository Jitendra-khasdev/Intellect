/*This program developed under compus recuirtment rounds.
 *Developer : jitendra khasdev
 *Date      : 5-setp-2014
 */



#include <stdio.h>
#include <malloc.h>

int insert(char,int);
int search(char);


typedef struct node{
char data;
int count;
struct node *link;
}ies;


int swap(struct node *,struct node *);

ies *start=NULL,*head=NULL;


int main(){

char str[1024],ch;
int len,i,j,count;

  printf("Enter a string\n");
  gets(str);

  for(len=0;str[len] != '\0'; len++);  // count the length of the string

  for(i=0;i<len;i++){
    ch = str[i]; 
    count=0;
    for(j=0;j<len;j++){
       if(ch == str[j])
        count++;
    }
    printf("char %c count == %d\n",ch,count);

   if(search(ch) == 0)
    insert(ch,count);

  }


printf("By link list\n");
sort(display()); 

printf("final values are\n");
display();
return 0;
}

int insert(char ch,int num){
     if(start == NULL){                  
       head = (ies *)malloc(sizeof(ies));
       head->data=ch;
       head->count=num;
       head->link=NULL;
       start=head;
     }else{
      head = (ies *)malloc(sizeof(ies));
      head->data=ch;
      head->count=num;
      head->link=start;
      start=head;
     }
return 0;
}


int display(){
ies *temp=start;
int len=0;
    while(temp != NULL){
     printf("%c %d times\n",temp->data,temp->count);    
     temp=temp->link;
     len++;
    }
return len;
}


int search(char ch){
ies *temp=start;
    while(temp != NULL){
       if(ch == temp->data)
       return -1; 
    temp=temp->link;
    }
return 0;
}

int sort(int i){

ies *temp,*lptr=NULL;
int swapped;

     do{
        swapped = 0;
        temp = start;
        while (temp->link != lptr)
        {
            if (temp->count < temp->link->count)
            {
                swap(temp, temp->link);
                swapped = 1;
            }
            temp = temp->link;
        }
        lptr = temp;
    }
    while (swapped);
return 0;
}
 


/* function to swap data of two nodes a and b*/
int swap(ies *a, ies *b)
{
int temp1,temp;
    temp = a->data;
    temp1 = a->count;

    a->data = b->data;
    b->data = temp;

    a->count = b->count;
    b->count = temp1;
}

