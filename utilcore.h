#ifndef HELPER_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define HELPER_H
#include <stdio.h>
#include<iostream>

struct Node;
Node *initLinkedList(int the_aray[], int arr_count);
int getNthFromLast(Node *head, int n);
void printList(Node* node);

#endif