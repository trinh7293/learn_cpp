#include "helper.h"
#include <stdio.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *initLinkedList(int the_aray[], int arr_count) {
    if (arr_count < 1) {
        throw "The array length must > 0";
    }
    Node *head = new Node(the_aray[0]);
    Node *tail = head;
    for(int i=1; i<arr_count; i++) {
        tail->next = new Node(the_aray[i]);
        tail = tail->next;
    }
    return head;
}

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" ";
        node = node->next;
  }  
  cout<<"\n";
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       Node* current = head;
       int count = 0;
       while(current != NULL) {
           current = current->next;
           count++;
       }
       if (n > count) {
           return -1;
       }
       int index = count - n;
       current = head;
       for (int i = 0; i < index - 1; i++) {
           current = current->next;
       }
       return current->data;
}