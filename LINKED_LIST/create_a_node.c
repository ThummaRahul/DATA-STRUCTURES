#include <stdlib.h>
#include <stdio.h>
struct node {
  int data;  
  char str[30];
  struct node *link;    
};
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    
    //head->data;
    head->link=NULL;
    
     printf("enter data\n");
    scanf("%d",&head->data);
    
     printf("enter name\n");
    scanf("%s",head->str);
    printf("%d ",head->data);
     printf("%s ",head->str);
    free(head);
}
