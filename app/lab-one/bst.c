#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lptr,*rptr;
};
struct node *newNode(int n) 
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = n;
  ptr->lptr=NULL;
  ptr->rptr=NULL;
  return ptr;
}
void inorder(struct node *root) 
{
  if (root!=NULL) 
  {
    inorder(root->lptr);
    printf("%d -> ", root->data);
    inorder(root->rptr);
  }
}
void min(struct node *root)
{
    while(root->lptr!=NULL)
    root=root->lptr;
    printf("min val is %d\n",root->data);
}
void max(struct node *root)
{
    while(root->rptr!=NULL)
    root=root->rptr;
    printf("max val is %d\n",root->data);
}
struct node *insert(struct node *root, int n) 
{
  if (root == NULL) 
    return newNode(n);
  if (n<root->data)
    root->lptr = insert(root->lptr,n);
  else
    root->rptr = insert(root->rptr,n);
  return root;
}
int main() 
{
    struct node *head = NULL;
    int n;
    printf("enter the root\n");
    scanf("%d",&n);
    head=insert(head,n);
    while(1)
    {
        printf("\nenter \n1 to insert \n2 to display in inorder \n3 to find max and min element \n0 to exit \n");
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
             switch(n)
             {
                 case 1:
                 printf("enter the value\n");
                 scanf("%d",&n);
                 head=insert(head,n);
                 break;
                case 2:
                printf("\ntree in inorder is :-\n");
                inorder(head);
                
                break;
                case 3:
                max(head);
                min(head);
                break;
                default:
                printf("\nwrong input\n");
             }
             
        }
    }
    return 0;
}