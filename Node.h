#ifndef __NODE_H_
#define __NODE_H_


struct nodeStruct {
    int value;
    struct nodeStruct* nextNodePtr;
};
typedef struct nodeStruct Node;

/*
CreateNode(int value) - This method makes a new nodeStruct based on the value of the argument passed. After allocating
    memory for it with malloc, it returns the pointer of the node that was created, which may be NULL if malloc failed.
 */
Node* CreateNode(int value);

/* 
DestroyNode() - This method frees the memory allocated to the target node from malloc. Return 0 if succesful, otherwise return -1;
 */
int DestroyNode(Node* target);

/* 
AddAfter(Node* firstNode, Node* secondNode) - This method stores the secondNode pointer to the nextNodePtr field of the firstNode 
    returns -1 if the nextNode argument was NULL. The secondNode may be NULL. If no problem, return 0; 
 */
int AddAfter(Node* firstNode, Node* secondNode);

/*
CompareTo(Node* firstNode, Node* secondNode) - This method compares two Node structs by their integer 'value' field. If either one 
    of the arguments is NULL, then a -2 is returned. If the value of firstNode and secondNode are equal, then a 0 is returned. If 
    firstNode's value is greater, a 1 is returned. If secondNode's value isgreater, then a -1 is returned. 
*/
int CompareTo(Node* firstNode, Node* secondNode);


#endif

