#include <stdio.h>
#include "Node.h"



int main(void) {

    fprintf(stdout, "Hello World!\n");

    Node* nodeA = CreateNode(1);
    Node* nodeB = CreateNode(2);
    Node* nodeC = CreateNode(3);
    AddAfter(nodeA, nodeB);
    AddAfter(nodeB, nodeC);

    Node* currentNode = nodeA;
    for (int i = 0; i < 3; i++) {
        fprintf(stdout, "%d\n", currentNode->value);
        currentNode = (currentNode->nextNodePtr);
    }



    return 0;


}