#include <Node.h>
#include <stdio.h>



/* Function Stubs */
Node* CreateNode(int value);
int DestroyNode(Node* target);
int AddAfter(Node* fristNode, Node* secondNode);

/* Function Definitions */
Node* CreateNode(int value) {
    return (Node*)malloc(sizeof(Node*));
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

