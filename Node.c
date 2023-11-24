#include "Node.h"
#include <stdio.h>
#include <stdlib.h>




/* Function Stubs */
Node* CreateNode(int value);
int DestroyNode(Node* target);
int AddAfter(Node* fristNode, Node* secondNode);
int CompareTo(Node* firstNode, Node* secondNode);

/* Function Definitions */
Node* CreateNode(int value) {
    Node* newNodePtr = (Node*)malloc(sizeof(Node));
    newNodePtr->value = value;
    return newNodePtr;
}

int DestroyNode(Node* targetNode) {
    if (targetNode == NULL) {
        return -1;
    } else {
        free(targetNode);
        return 0;
    }
}

int AddAfter(Node* firstNode, Node* secondNode) {
    if (firstNode == NULL) {
        return -1;
    } else {
        firstNode->nextNodePtr = secondNode;
    }
}

int CompareTo(Node* firstNode, Node* secondNode) {
    if (firstNode == NULL || secondNode == NULL) {
        return -2;
    } 
    if (firstNode->value == secondNode->value) {
        return 0;
    } else if (firstNode->value > secondNode->value) {
        return 1;
    } else {
        return -1;
    }
}