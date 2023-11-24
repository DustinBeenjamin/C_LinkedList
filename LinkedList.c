#include "LinkedList.h"
#include "Node.h"
#include <stdlib.h>

/* Function Stubs*/
LinkedList* CreateLinkedList(int value);
int Add(LinkedList* list, Node* newNode);
int LinkedAddAfter(LinkedList* list, Node* targetNode, Node* newNode);
int PrintList(LinkedList* list);

/* Function Definitions */
LinkedList* CreateLinkedList(int value) {
    Node* headNode = CreateNode(value);
    if (headNode == NULL) {
        return NULL;
    } else {
        LinkedList* newList = (LinkedList*) malloc(sizeof(LinkedList));
        newList->size = 1;
        newList->head = headNode;
        newList->tail = headNode;
        newList->current = headNode;
        return newList;
    }
}

int Add(LinkedList* list, Node* newNode) {
    if (list == NULL || newNode == NULL) {
        return -1;
    } else {
        AddAfter(list->tail, newNode);
        list->tail = newNode;
        list->size ++;
        return 0;        
    }
}

int PrintList(LinkedList* list) {
    if (list == NULL) {
        return -1;
    } else {
        list->current = list->head;
        while (list->current != NULL) {
            int counter = 1;
            fprintf(stdout, "Node %d: %d\n", counter, (list->current)->value);
            counter++;
            list->current = (list->current)->nextNodePtr;
        }
        return 0;
    }
}

