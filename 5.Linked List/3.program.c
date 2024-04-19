#include<stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *remove_node(Node *head, Node *node)
{
    if (node==head)
    {
        head=node->next;
        free(node);
        return head;
    }
    Node *current_node = head;
    while (current_node!=NULL)
    {
        if (current_node->next==node)
        {
            break;
        }
        current_node=current_node->next;
    }
    if (current_node==NULL)
    {
        return head;
    }
    current_node->next=node->next;
    free(node);
    return head;
}
int main()
{
    Node *n1,*head,*n2;
    n1=create_node(10,NULL);
    head=n1;
    print_linked_list(head);

    head=prepend(head, 20);
    print_linked_list(head);

    head=append(head, 30);
    print_linked_list(head);

    head=remove_node(head, n1);
    print_linked_list(head);

    n2=head;
    head=remove_node(head, n2);
    print_linked_list(head);

    n2=head;
    head=remove_node(head, n2);
    print_linked_list(head);
    return 0;
}