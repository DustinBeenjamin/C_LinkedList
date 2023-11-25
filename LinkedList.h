#ifndef __LINKEDLIST_
#define __LINKEDLIST_
#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

struct linkedListStruct {
    Node* head;
    Node* tail;
    Node* current;
    int size;
};
typedef struct linkedListStruct LinkedList;


/*
 CreateLinkedList(Node* headNode) - Creates a node from the value provided. Then creates a LinkedList struct
   where that node is the head.
 */
LinkedList* CreateLinkedList(int value);

/*
 Add(LinkedList* list, Node* newNode) - Creates a node with the provided value and adds it to the end of the linkedList. 
 */
int LAdd(LinkedList* list, int value);

/*
 PrintList(LinkedList* list) - Prints all the values of the nodes in the linked list 
*/
int PrintList(LinkedList* list);

/*
 Remove(LinkedList* list, int value) - Remove the first node with the given value. If no matching element is found, it returns -1.
   If the list is Null, then a -2 is returned. Otherwise, a 0 is returned.
*/
int Remove(LinkedList* list, int value);

/*
 Find(LinkedList* list, int value) - Iterates through the list, starting from the head. As it iterates, it compares the current
  Node's against the provided value. If they are equal, the method returns the pointer of the previous node. If no node is found, 
  NULL is returned. If list is NULL, NULL is returned. If the head of the list is the first occureance, the returned
  node will also be NULL (potentially problematic??). 
  TO_DO FIX THIS
*/
Node* Find(LinkedList* list, int value);


#endif