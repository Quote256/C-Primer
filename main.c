#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *testList = list_alloc();

  //Tests the output if list is empty
  printf("Prints empty list: \n");
  list_print(testList);
  printf("\n");

  //Printing length of empty list
  printf("Prints length of list:\n");
  printf("%d\n", list_length(testList));

  //Adding elements to back of list
  printf("Add elements to the back of the list:\n");
  list_add_to_back(testList, 1); 
  list_add_to_back(testList, 2);
  list_add_to_back(testList, 3);
  list_print(testList);

  //Adding elements to the front of the list
  printf("\nAdd elements to front of list:\n");
  list_add_to_front(testList, 0);
  list_add_to_front(testList, 15);
  list_add_to_front(testList, 35);
  list_print(testList);

  //Removing elements from front
  printf("\nRemoving elements from front: \n");
  list_remove_from_front(testList);
  list_print(testList);

  //Removing element at index
  printf("\nRemoving elements at index\n");
  list_remove_at_index(testList, 0);
  list_print(testList);
  
  //Adding elements at index
  printf("\nAdding element at index\n");
  list_add_at_index(testList, 5, 1);
  list_print(testList);

  //Getting the length of a populated linked list
  printf("\nShowing length of the current list:\n");
  printf("%d\n", list_length(testList));

  //Checking if an element is in the list
  printf("Seeing if the element is in the list:\n");
  list_is_in(testList, 2);

  //Returning the element at the given index
  printf("\nGetting the element at the given index:\n");
  printf("%d\n",list_get_elem_at(testList, 0));

  //Getting the index of the given element
  printf("Getting the index of the element:\n");
  printf("%d\n", list_get_index_of(testList, 3));

  printf("Bye!\n");

  //Deallocating space
  list_free(testList);
  return 0;
}