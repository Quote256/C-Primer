#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *testList = list_alloc();
  //Tests the output if list is empty
  list_print(testList);
  printf("%d\n", list_length(testList));
  list_add_to_back(testList, 1);
  list_add_to_back(testList, 2);
  list_add_to_back(testList, 3);
  list_add_to_front(testList, 0);
  list_remove_at_index(testList, 0);
  list_print(testList);
  printf("\n%d\n", list_length(testList));
  printf("%d\n",list_is_in(testList, 2));
  printf("%d\n", list_get_index_of(testList, 3));
  return 0;
}