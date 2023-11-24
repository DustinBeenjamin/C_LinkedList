#ifndef NODE_H_
#define NODE_H_


struct nodeStruct {
    int value;
    struct nodeStruct* nextNodePtr;
};
typedef struct nodeStruct Node;

// CreateNode(int value) - This method makes a new nodeStruct based on the value of the argument passed. After allocating
// memory for it with malloc, it returns the pointer of the node that was created, which may be NULL if malloc failed.
Node* CreateNode(int value);

// DestroyNode() - This method frees the memory allocated to the target node from malloc. Return 0 if succesful, otherwise return -1;
int DestroyNode(Node* target);

// AddAfter(Node* firstNode, Node* nextNode) - This method stores the secondNode pointer to the nextNodePtr field of the firstNode 
// returns -1 if the nextNode argument was NULL. The secondNode may be NULL. However, it might cause the program to lose reference to
// an entire section of the linked list. If no error, return 0; 
int AddAfter(Node* firstNode, Node* secondNode);

#endif

