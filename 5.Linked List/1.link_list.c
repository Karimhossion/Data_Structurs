#include<stdio.h>
#include<stdlib.h>

// স্ট্রাকচার ডিফাইনিশন
typedef struct node Node;

// নোড স্ট্রাকচার
struct node
{
    int data;      // ডেটা ধারণ করতে এই মেম্বার
    Node *next;    // পরবর্তী নোডের ঠিকানা ধারণ করতে এই মেম্বার
};

// নোড তৈরি করার ফাংশন
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node)); // নতুন নোডের জন্য মেমরি অ্যালোকেশন
    if (new_node == NULL)
    {
        printf("ত্রুটি! নতুন নোড তৈরি করা সম্ভব হয়নি।\n");
    }
    new_node->data = item; // নতুন নোডে ডেটা সেট করা
    new_node->next = next; // নতুন নোডে পরবর্তী নোডের ঠিকানা সেট করা
    return new_node; // নতুন নোডের ঠিকানা রিটার্ন করা
}

// মুখ্য ফাংশন
int main()
{
    Node *n;
    n = create_node(10, NULL); // ১০ ডেটা ধারণ করতে এবং পরবর্তী নোডের ঠিকানা NULL করতে নতুন নোড তৈরি করা
    printf("ডেটা = %d\n", n->data); // নোডে ধারণকৃত ডেটা প্রিন্ট করা
    return 0; // প্রোগ্রাম সঠিকভাবে সমাপ্ত করা
}
