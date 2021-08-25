// { Driver Code Starts
// C program to find n'th Node in linked list
#include "utilcore.h"

void testGetNthFromLast();
Node* initNormalLinkedList();
void testDetectLoop();
// void testInitLoopedLinkedListFromArray();

/* Driver program to test above function*/
int main()
{
    // testGetNthFromLast();
    // testInitLoopedLinkedListFromArray();
    testDetectLoop();
    return 0;
}

Node* initNormalLinkedList() {
    int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    return initLinkedListFromArray(arr, count);
}

void testDetectLoop() {
    int count = 6;
    int arr[count] = {1, 2, 3, 4, 5, 6};
    int pos = 3;
    Node* head = initLoopedLinkedListFromArray(arr, count, pos);
    bool re = detectLoop(head);
    std::cout << "is looped: " << re;
    Node* head2 = initLinkedListFromArray(arr, count);
    bool re2 = detectLoop(head2);
    std::cout << "not looped: " << re2;
}

void testGetNthFromLast() {
    Node* head = initNormalLinkedList();
    int nth = 1;
    int result = getNthFromLast(head, nth);
    printList(head);
    std::cout << "the " << nth << "th from last: " << result << '\n';
}

void testInitLoopedLinkedListFromArray() {
    Node* head = initNormalLinkedList();
    printList(head);
}
