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

void addValue()
{
    int new_value;
    printf("new value: ");
    scanf("%d", &new_value);
    insert(new_value);
}

int main()
{
    int size;
    printf("element size : ");
    scanf("%d", &size);

    int element;
    printf("element : ");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &element);
        insert(element);
    }

    printf("Linked List: ");
    printList();

    addValue();
    printf("add end element Link list : ");
    printList();

    return 0;
}
