#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *testList = list_alloc();
  //Tests the output if list is empty
  list_print(testList);
  return 0;
}