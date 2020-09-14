// list/list.c
// 
// Implementation for linked list.
//
// <Author>

#include <stdio.h>

#include "list.h"

list_t *list_alloc() { 
    list_t *l = (list_t *) malloc(sizeof(list_t));
    l->head = NULL;
    return l; }
void list_free(list_t *l) {
    node_t *cNode = l->head;
    while(cNode != NULL){
        node_t *node = cNode;
        cNode = cNode->next;
        free(node);
  }
  free(l);
}

void list_print(list_t *l) {
    //Create a new node pointer variable that will traverse through the list 
    node_t *cNode = l->head;
    //Check to see if list is empty
    if(cNode == NULL){
      printf("The list is empty\n");
    }
    while(cNode != NULL){
        printf("%d", cNode->value);
        //Increments the placement of the node
        cNode =cNode->next;
    }
 }
int list_length(list_t *l) { 
  int listLength = 0;
  node_t *counterNode = l->head;
  while(counterNode != NULL){
    listLength+=1;
    counterNode = counterNode->next;
  }
  return listLength; 
  }

void list_add_to_back(list_t *l, elem value) {
  //Initialize the temporary node that will add the element to the back
	node_t *adderNode = l->head;
  adderNode->value = value;
  adderNode->next = NULL;
  if(l->head == NULL){
    l->head = adderNode;
  }else{
      while(adderNode != NULL){
      adderNode = adderNode->next;
    }
  }

}
void list_add_to_front(list_t *l, elem value) {
  node_t *n = l->head;
  l->head = (node_t*)malloc(sizeof(node_t));
  n->value = value;
  n->next = n;
}
void list_add_at_index(list_t *l, elem value, int index) { }

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }