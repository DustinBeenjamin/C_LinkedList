#include <stdio.h>
#include <stdlib.h>
#include "Node.h"



int main(void) {

    /* the head of the linked list */
    Node* head = CreateNode(random() % 21 - 10);;

    /* generate and assemble nodes with random integer values between -10 and 10 (inclusive) */
    uint seed = 1234;
    srandom(seed);

    Node* currentNode = head;
    for (int i = 0; i < 99; i++) {
        int randomNumber = random() % 21 - 10;
        AddAfter(currentNode, CreateNode(randomNumber));
        currentNode = currentNode->nextNodePtr;
    }

    
    /* print out the linked list */
    currentNode = head;
    int counter = 1;
    while (currentNode != NULL) {
        fprintf(stdout, "Node %d: %d\n", counter, currentNode->value);
        currentNode = currentNode->nextNodePtr;
        counter++;
    }

    /* compare the values of adjacent nodes */
    currentNode = head;
    Node* nextNode = head->nextNodePtr;
    while (nextNode != NULL) {
        fprintf(stdout, "Comparing %d against %d: %d\n", currentNode->value, nextNode->value, CompareTo(currentNode, nextNode));
        currentNode = nextNode;
        nextNode = nextNode->nextNodePtr;
    }


    return 0;


}