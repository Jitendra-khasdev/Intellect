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

sort(); 

printf("By link list\n");
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
    while(temp != NULL){
     printf("%c %d times\n",temp->data,temp->count);    
     temp=temp->link;
    }
return 0;
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

int sort(){

ies *temp=start,*temp_in,*var,*var_temp;

for(;temp!=NULL;temp=temp->link){
 for(temp_in=start ; temp_in != NULL ; temp_in=temp_in->link){
              var_temp=temp_in;
             if(var_temp->data >= (var_temp+1)->data){
                  var=(var_temp+1)->link;
                  (var_temp-1)->link=var_temp+1;
                   (var_temp+1)->link=var_temp;
                   var_temp->link=var;
             } 
  }
}


return 0;
}

