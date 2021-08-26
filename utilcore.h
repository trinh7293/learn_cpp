#ifndef HELPER_H // To make sure you don't declare the function more than once by including the header multiple times.
#define HELPER_H
#include <stdio.h>
#include <iostream>

/* Link list Node */
class Node
{
public:
    int data;
    Node(int d)
    {
        data = d;
    }
    Node *next;
};

Node *initLinkedListFromArray(int the_aray[], int arr_count);
Node *initLoopedLinkedListFromArray(int the_aray[], int arr_count, int pos);
void printList(Node *node);
int getNthFromLast(Node *head, int n);
Node *getMiddleNode(Node *head);
bool detectLoop(Node *head);
int countNodesinLoop(struct Node *head);
Node *reverseLinkedList(Node *head);

#endif