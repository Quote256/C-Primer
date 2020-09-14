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
        printf("%d ", cNode->value);
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
  if (adderNode == NULL) {
    adderNode = (node_t *) malloc(sizeof(node_t));
    adderNode->value = value;
    adderNode->next = NULL;
    l->head = adderNode;
  } 
  else {
    while (adderNode->next != NULL) {
      adderNode = adderNode->next;
    }
    adderNode->next = (node_t *) malloc(sizeof(node_t));
    adderNode->next->value = value;
    adderNode->next->next = NULL;    
  }
}
void list_add_to_front(list_t *l, elem value) {
  node_t *n = l->head;
  l->head = (node_t*)malloc(sizeof(node_t));
  l->head->value = value;
  l->head->next = n;
}
void list_add_at_index(list_t *l, elem value, int index) { 

}

elem list_remove_from_back(list_t *l) { 
  node_t *temp = l->head;

  if (list_length(l) == 0){
        return 0; 
  }

  if(temp->next != NULL){
        temp = temp->next;
  
  }
  elem removedNum = temp->value;
    free(temp);
  return removedNum;
 
}
elem list_remove_from_front(list_t *l) { 
    if (!l)
      {
          printf("The list does not exist.");
          return 0;
      }
      elem removedNum = l->head->value;
      node_t *temp = l->head;
      l->head = l->head->next;
      free(temp);
    return removedNum;
 }
elem list_remove_at_index(list_t *l, int index) { 

  node_t *temp = l->head;
  if(index == 0){
    list_remove_from_front(l);
  }else if(index == (list_length(l) - 1)){
    list_remove_from_back(l);
  }else{
    for(int i = 0; i < (index -1); i++){
      temp = temp->next;
    }
    elem removedNum = temp->value;
    free(temp);
    return removedNum;
  }
  return -1;
}

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }