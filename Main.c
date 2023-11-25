#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"




int main(void) {

    LinkedList* listA = CreateLinkedList(1);
    LAdd(listA, 2);
    LAdd(listA, 3);
    LAdd(listA, 4);
    LAdd(listA, 5);
    LAdd(listA, 6);

    PrintList(listA);


    printf("Enter the integer of the value you would like to search\n");
    int searchValue;
    scanf("%d", &searchValue);
    LinkedList* listToSearch = NULL;
    
    Node* temp = Find(listToSearch, searchValue);
    if (temp == NULL){
        if (listToSearch == NULL) {
            fprintf(stdout, "The search list was NULL\n");
        } else if (listToSearch->head->value == searchValue) {
            fprintf(stdout, "The first node was a match\n");
        } else {
            fprintf(stdout, "The value was not found\n");
        }
    } else {
        printf("The value %d was found after the value %d\n", searchValue, temp->value);
    }






    return 0;


}