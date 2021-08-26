#include "utilcore.h"

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
    tail->next = NULL;
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

Node *getMiddleNode(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL)
    {
        if (fast->next->next == NULL)
        {
            return slow->next;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool detectLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    Node *fast = head;
    Node *slow = head;
    bool inLoop = false;
    int count = 0;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (inLoop)
        {
            count++;
        }
        if (fast == slow)
        {
            if (inLoop)
            {
                return count;
            }
            else
            {
                inLoop = true;
            }
        }
    }
    return 0;
}

Node *reverseLinkedList(Node *head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next = head->next;
    while (current != NULL)
    {
        current->next = previous;
        if (next == NULL)
        {
            break;
        }
        previous = current;
        current = next;
        next = next->next;
    }
    return current;
}

bool checkSameLinkedListFirstElements(Node *head1, Node *head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1->data != curr2->data)
        {
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}

bool checkPalindrome(Node *head)
{
    Node *head2 = getMiddleNode(head);
    head2 = reverseLinkedList(head2);
    return checkSameLinkedListFirstElements(head, head2);
}
