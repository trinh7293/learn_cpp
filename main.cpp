// { Driver Code Starts
// C program to find n'th Node in linked list
#include "utilcore.h"

void testSameLL();
void testGetNthFromLast();
Node *initNormalLinkedList();
void testDetectLoop();
void testCountLoop();
void testGetMid();
void testReverseLinkedList();
// void testInitLoopedLinkedListFromArray();

/* Driver program to test above function*/
int main()
{
    testSameLL();
    // testReverseLinkedList();
    // testGetMid();
    // testCountLoop();
    // testDetectLoop();
    // testInitLoopedLinkedListFromArray();
    // testGetNthFromLast();
    return 0;
}

Node *initNormalLinkedList()
{
    const int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    return initLinkedListFromArray(arr, count);
}

void testSameLL()
{
    const int size1 = 5, size2 = 7;
    int arr1[size1] = {1, 2, 3, 4, 5};
    int arr2[size2] = {1, 2, 3, 4, 3, 6, 7};
    Node *head1 = initLinkedListFromArray(arr1, size1);
    Node *head2 = initLinkedListFromArray(arr2, size2);
    bool re = checkSameLinkedListFirstElements(head1, head2);
    printList(head1);
    printList(head2);
    std::cout << "the 2 linked list is same first: " << re;
}

void testReverseLinkedList()
{
    Node *head = initNormalLinkedList();
    printList(head);
    Node *head2 = reverseLinkedList(head);
    printList(head2);
}

void testGetMid()
{
    const int count = 7;
    int arr[count] = {1, 2, 3, 100, 5, 6, 7};
    Node *head = initLinkedListFromArray(arr, count);
    Node *mid = getMiddleNode(head);
    printList(head);
    std::cout << "Middle is: " << mid->data;
}

void testCountLoop()
{
    const int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    int pos = 1;
    Node *head = initLoopedLinkedListFromArray(arr, count, pos);
    int re = countNodesinLoop(head);
    std::cout << "count Node: " << re;
    Node *head2 = initLinkedListFromArray(arr, count);
    int re2 = countNodesinLoop(head2);
    std::cout << "count Node: " << re2;
}

void testDetectLoop()
{
    const int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    int pos = 3;
    Node *head = initLoopedLinkedListFromArray(arr, count, pos);
    bool re = detectLoop(head);
    std::cout << "is looped: " << re;
    Node *head2 = initLinkedListFromArray(arr, count);
    bool re2 = detectLoop(head2);
    std::cout << "not looped: " << re2;
}

void testGetNthFromLast()
{
    Node *head = initNormalLinkedList();
    int nth = 1;
    int result = getNthFromLast(head, nth);
    printList(head);
    std::cout << "the " << nth << "th from last: " << result << '\n';
}

void testInitLoopedLinkedListFromArray()
{
    Node *head = initNormalLinkedList();
    printList(head);
}
