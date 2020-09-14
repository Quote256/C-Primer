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

void list_print(list_t *l) {  }
int list_length(list_t *l) { 

  return -1; }

void list_add_to_back(list_t *l, elem value) {
	
}
void list_add_to_front(list_t *l, elem value) {}
void list_add_at_index(list_t *l, elem value, int index) {}

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }