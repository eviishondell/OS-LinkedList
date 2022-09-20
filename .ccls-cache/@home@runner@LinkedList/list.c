// list/list.c
// 
// Implementation for linked l                 ist.
//
// <Author>

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#include "list.h"

list_t *list_alloc() { 
  list_t *list = (list_t*)malloc(sizeof(list_t));
  list->head = NULL;
  return list;
 }

node_t *node_alloc() { 
  node_t *node = (node_t*)malloc(sizeof(node_t));
  node->next = NULL;
  return node;
 }

//node free
void node_free(node_t *n) {
  free(n);
}

void list_free(list_t *l) {
  node_t *tmp;
  node_t *next;
  // if (l == NULL)
  //   return;
  tmp = l->head;
  while (tmp != NULL) 
  {
    next = tmp->next;          
    free(tmp);
    tmp = next;
    }
  free(l->head);
  l->head = NULL;
}

void list_print(list_t *l) {
  node_t *curr = l->head;
  if (curr != NULL) {
    while (curr != NULL) {
      printf("%d ",  curr->value);
      curr = curr->next;
    }
  }
}
int list_length(list_t *l) 
  { 
    node_t *current = l->head;
    int count = 0;
    while (current != NULL){
      count ++ ;
      current = current->next;
    }
    return count;
  }

void list_add_to_back(list_t *l, elem value) {
  // Check if head is empty
  if (l->head == NULL) {
    node_t* new_node = node_alloc();
    new_node->value = value;
    l->head = new_node;
  } else {
    node_t *curr = l->head;
    // Looped all the way to the last element of the linked list
    while (curr->next != NULL) {
      curr = curr->next;
    }
    if (curr->next == NULL) {
        node_t* new_node = node_alloc();
        new_node->value = value;
        curr->next = new_node;
      } //make node first, current.next to node

  }
}


void list_add_to_front(list_t *l, elem value)
{
    // Check if head is empty
  if (l->head == NULL) {
    node_t* new_node = node_alloc();
    new_node->value = value;
    l->head = new_node;
    } 
  else {
    //allocate for new node
    node_t* new_node = node_alloc();
    //create new node and assign value
    new_node->value = value;
    //assign rest of list to temp variable
    node_t* temp = l->head;
    //set head to new node
    l->head = new_node;
    //set new node to rest of list
    new_node->next = temp;
      }

  }


void list_add_at_index(list_t *l, elem value, int index) 
{
  node_t* new_node = node_alloc();
  new_node->value = value;
  int count = 0;
  node_t *curr = l->head;
  while (curr->next != NULL) {
      count ++;
      curr = curr->next;
    }
  if (count == index){
      curr->next = new_node;
      new_node->next = curr->next;
      
    }
}

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }

