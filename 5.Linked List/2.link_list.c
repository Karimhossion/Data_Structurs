//link list ar suru te data jukto korbo 
#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *preprend (Node *head, int item)
{
    Node *new_node = create_node(item,head);
    return new_node;
}
int main()
{
    Node *n1, *n2, *head,*n3;
    n1=create_node(10,NULL);
    head=n1;
    
    head = preprend(head,20);
    n2 = head;

    printf("first data = %d\n",n2->data);
    n3=n2->next;
    printf("second data = %d\n");
    return 0;
}
