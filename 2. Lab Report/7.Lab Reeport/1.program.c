// WAP of  Create a linked list of 8 elements and show the list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void printList()
{
    struct node *ptr = head;
    printf("head=>");
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("=>null");
}

void insert(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;
    link->next = NULL;

    if (head == NULL)
    {
        head = link;
        last = link;
    }
    else
    {
        last->next = link;
        last = link;
    }
}
int main()
{
    char ch;
    int x;
    for (int i = 0; i <8; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    printList();
    return 0;
}