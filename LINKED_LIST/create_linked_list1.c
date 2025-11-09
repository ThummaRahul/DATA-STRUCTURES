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
    
    printf("enter data\n");
    scanf("%d",&head->data);
    
    printf("enter name\n");
    scanf("%s",head->str);
    
    
    
    struct node *current = (struct node*)malloc(sizeof(struct node));
    
    printf("enter data\n");
    scanf("%d",&current->data);
    
    printf("enter name\n");
    scanf("%s",current->str);
    
    head->link=current;
    
    printf("%d ",head->data);
    printf("%s ",head->str);
    printf("%d ",current->data);
    printf("%s ",current->str);
    
    current->link=NULL;
    
    free(head);
    free(current);
}
