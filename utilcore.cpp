#include "utilcore.h"

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *initLinkedListFromArray(int the_aray[], int arr_count)
{
    if (arr_count < 1)
    {
        throw "The array length must > 0";
    }
    Node *head = new Node(the_aray[0]);
    Node *tail = head;
    for (int i = 1; i < arr_count; i++)
    {
        tail->next = new Node(the_aray[i]);
        tail = tail->next;
    }
    return head;
}

Node *initLoopedLinkedListFromArray(int the_aray[], int arr_count, int pos)
{
    if (arr_count < 1)
    {
        throw "The array length must > 0";
    }
    Node *head = new Node(the_aray[0]);
    Node *tail = head;
    Node *loop = NULL;
    for (int i = 1; i < arr_count; i++)
    {
        tail->next = new Node(the_aray[i]);
        if (i == pos)
        {
            loop = tail;
        }
        tail = tail->next;
    }
    tail->next = loop;
    return head;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << "\n";
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        current = current->next;
        count++;
    }
    if (n > count)
    {
        return -1;
    }
    int index = count - n;
    current = head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }
    return current->data;
}

bool detectLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        if (fast == slow)
        {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}