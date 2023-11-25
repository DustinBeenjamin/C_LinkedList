#include "LinkedList.h"
#include "Node.h"
#include <stdlib.h>

/* Error handling variables */

/* Function Stubs*/
LinkedList* CreateLinkedList(int value);
int LAdd(LinkedList* list, int value);
int LinkedAddAfter(LinkedList* list, Node* targetNode, Node* newNode);
int PrintList(LinkedList* list);
int Remove(LinkedList* list, int value);
Node* Find(LinkedList* list, int value);

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

int LAdd(LinkedList* list, int value){
    if (list == NULL) {
        return -1;
    } else {
        Node* newNode = CreateNode(value);
        AddAfter(list->tail, newNode);
        list->tail = newNode;
        list->size++;
        return 0;        
    }
}

int PrintList(LinkedList* list) {
    if (list == NULL) {
        return -1;
    } else {
        list->current = list->head;
        int counter = 1;
        while (list->current != NULL) {
            fprintf(stdout, "Node %d: %d\n", counter, (list->current)->value);
            counter++;
            list->current = (list->current)->nextNodePtr;
        }
        return 0;
    }
}

int Remove(LinkedList* list, int value) {
    // if (list == NULL) {
    //     return -2;
    // } else {

    // }
}

Node* Find(LinkedList* list, int value) {
    if (list == NULL) {
        return NULL;
    }
    Node* previousNode = NULL;
    Node* currentNode = list->head;
    while (currentNode != NULL) {
        if (currentNode->value == value) {
            return previousNode;
        } else {
            previousNode = currentNode;
            currentNode = currentNode->nextNodePtr;
        }
    }
    return NULL;
}