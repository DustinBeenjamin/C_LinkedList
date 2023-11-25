#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"




int main(void) {

    LinkedList* listA = CreateLinkedList(1);
    // LAdd(listA, 2);
    // LAdd(listA, 3);
    // LAdd(listA, 4);
    // LAdd(listA, 5);
    // LAdd(listA, 6);

    PrintList(listA);


    printf("Enter the integer of the value you would like to remove\n");
    int targetValue;
    scanf("%d", &targetValue);
    LinkedList* targetList = listA;

    Remove(targetList, targetValue);

    PrintList(listA);
    
    






    return 0;


}