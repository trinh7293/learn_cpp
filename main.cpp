// { Driver Code Starts
// C program to find n'th Node in linked list
#include "utilcore.h"

void testCheckPalin();
void testSameLL();
void testGetNthFromLast();
Node *initNormalLinkedList();
void testDetectLoop();
void testCountLoop();
void testGetMid();
void testReverseLinkedList();
void testRemoveDuplicatesSorted();
// void testInitLoopedLinkedListFromArray();

/* Driver program to test above function*/
int main()
{
    testRemoveDuplicatesSorted();
    // testCheckPalin();
    // testSameLL();
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

void testRemoveDuplicatesSorted()
{
    const int count = 9;
    int arr[count] = {1, 3, 3, 3, 3, 5, 7, 7, 7};
    Node *head = initLinkedListFromArray(arr, count);
    printList(head);
    Node *re = removeDuplicatesSorted(head);
    printList(re);
}

void testCheckPalin()
{
    const int count = 7;
    int arr[count] = {1, 2, 3, 4, 5, 6, 7};
    Node *head = initLinkedListFromArray(arr, count);
    bool re = checkPalindrome(head);
    printList(head);
    // printList(head);
    cout << "the linked list is palindrome: " << re << '\n';
    const int count2 = 7;
    int arr2[count2] = {1, 2, 3, 4, 3, 2, 1};
    Node *head2 = initLinkedListFromArray(arr2, count2);
    bool re2 = checkPalindrome(head2);
    printList(head2);
    // printList(head);
    cout << "the linked list is palindrome: " << re2;
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
    cout << "the 2 linked list is same first: " << re;
}

void testReverseLinkedList()
{
    Node *head = initNormalLinkedList();
    Node *head2 = reverseLinkedList(head);
    reverseLinkedList(head2);
    printList(head);
}

void testGetMid()
{
    const int count = 7;
    int arr[count] = {1, 2, 3, 100, 5, 6, 7};
    Node *head = initLinkedListFromArray(arr, count);
    Node *mid = getMiddleNode(head);
    printList(head);
    cout << "Middle is: " << mid->data;
}

void testCountLoop()
{
    const int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    int pos = 1;
    Node *head = initLoopedLinkedListFromArray(arr, count, pos);
    int re = countNodesinLoop(head);
    cout << "count Node: " << re;
    Node *head2 = initLinkedListFromArray(arr, count);
    int re2 = countNodesinLoop(head2);
    cout << "count Node: " << re2;
}

void testDetectLoop()
{
    const int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    int pos = 3;
    Node *head = initLoopedLinkedListFromArray(arr, count, pos);
    bool re = detectLoop(head);
    cout << "is looped: " << re;
    Node *head2 = initLinkedListFromArray(arr, count);
    bool re2 = detectLoop(head2);
    cout << "not looped: " << re2;
}

void testGetNthFromLast()
{
    Node *head = initNormalLinkedList();
    int nth = 1;
    int result = getNthFromLast(head, nth);
    printList(head);
    cout << "the " << nth << "th from last: " << result << '\n';
}

void testInitLoopedLinkedListFromArray()
{
    Node *head = initNormalLinkedList();
    printList(head);
}
