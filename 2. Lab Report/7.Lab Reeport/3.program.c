//WAP to add a element end of the linked list
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
    printf("=>null\n");
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

void addBeg()
{
    int new_value;
    printf("new value : ");
    scanf("%d", &new_value);


    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_value;
    new_node->next = head;
    head = new_node;
}

int main()
{
    int size;
    printf("element size : ");
    scanf("%d", &size);

    int elem;
    printf("element : ");
    for (int i = 0; i < size; ++i)
    {

        scanf("%d", &elem);
        insert(elem);
    }

    printf("Linked List : ");
    printList();

    addBeg();
    printf("add begining element Link list : ");
    printList();

    return 0;
}
