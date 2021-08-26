#ifndef HELPER_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define HELPER_H
#include <stdio.h>
#include<iostream>

struct Node;
Node *initLinkedListFromArray(int the_aray[], int arr_count);
Node *initLoopedLinkedListFromArray(int the_aray[], int arr_count, int pos);
void printList(Node* node);
int getNthFromLast(Node *head, int n);
int getMiddle(Node *head);
bool detectLoop(Node *head);
int countNodesinLoop(struct Node *head);

#endif