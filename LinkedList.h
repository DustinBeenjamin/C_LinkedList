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
 Add(LinkedList* list, Node* newNode) - Adds the newNode to the end of the linkedList. 
 */
int Add(LinkedList* list, Node* newNode);

/*
 PrintList(LinkedList* list) - Prints all the values of the nodes in the linked list 
*/
int PrintList(LinkedList* list);



#endif