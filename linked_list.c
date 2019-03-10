//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* nextPtr;
};
struct Node* headPtr = NULL;
struct Node* tailPtr = NULL;
void insertAtFront(int value) // inserts value
{
     if(headPtr == NULL) // list is empty so we need to make the head
    {
        headPtr= (struct Node*) malloc(sizeof( struct Node)); // make a new node for the head
        headPtr->data = value; //add the value to the head


    }
    else // the list already exist
    {   struct Node* currentNodePtr = (struct Node*) malloc(sizeof( struct Node)); //allocate space for new node
        currentNodePtr-> data = value; // add value to new node
        currentNodePtr ->nextPtr = headPtr; // previous head is now the next pointer

        headPtr = currentNodePtr; // the current node is the new head
    }
}

void run_linked_list() {
    printf("Running linked list\n");
  for (int x = 0; x < 10; x++)
{
   printf("x: %d\n", x);
    insertAtFront(x);
}
printf("data at the head of list: %d \n", headPtr->data);
}
