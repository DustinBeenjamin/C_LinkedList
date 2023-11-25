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
        if (list->size == 0) {
            fprintf(stdout, "This list is empty!\n");
        }
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
    /* get the node before the element that should be removed */
    Node* previousNode = Find(list, value);
    
    if (previousNode == NULL){
        if (list == NULL) {
            /* the provided list was null */
            fprintf(stderr, "Error: Cannot remove element from a null list\n");
            exit(-1);
        } else if (list->head->value != value) {
            /* the value was not found */
            return 0;
        }
    }

    if (list->head->value == value) {
        /* the head was the match but previous node is null */
        if(list->size == 1) {
            /* the list only has 1 element */
            DestroyNode(list->head);
            list->head = NULL;
            list->tail = NULL;
            list->size--;   
        } else {
            /* the list has multiple elements but there is no node before the matching node */
            printf("Test\n");
            Node* tempNode = list->head;
            list->head = list->head->nextNodePtr;
            DestroyNode(tempNode);
            list->size--;
        }
    } else {
        /* previous node is not null */
        /* tempNode holds onto the reference to the node to be removed so that it can be freed without losing reference*/
        Node* tempNode = previousNode->nextNodePtr;
        previousNode->nextNodePtr = tempNode->nextNodePtr;
        DestroyNode(tempNode);
        list->size--;
    } 
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