#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  printf(" \n");

  
  printf("Tests for allocation\n");
  list_t* l = list_alloc();

  
  printf("Tests for freeing\n");
  list_free(l);

  
  printf("Tests for adding to the back\n");
  list_add_to_back(l, 1);
  list_add_to_back(l, 2);
  list_add_to_back(l, 3);

  
  printf("Tests for printing\n");  
  list_print(l);
  printf("\n");

  
  printf("Test for the length\n");
  printf("%d\n", list_length(l));

  
  printf("Test for adding to the front");
  printf("\n");
  list_add_to_front(l,4);
  list_print(l);
  printf("\n");

  
  printf("Test for adding at index");
  printf("\n");
  list_add_at_index(l,5,2);
  list_print(l);
  printf("\n");

  
  printf("Test for removing from back");
  printf("\n");
  list_remove_from_back(l);
  list_print(l);
  printf("\n");

  printf("Test for removing from front");
  printf("\n");
  list_remove_from_front(l);
  list_print(l);
  printf("\n");

  
  printf("Test for returning removed element");
  printf("\n");
  list_remove_at_index(l,2);
  list_print(l);
  printf("\n");


  printf("Test for checking if element is in list");
  printf("\n");
  list_is_in(l,10);
  printf("\n");

  printf("Returns the element at the given index");
  printf("\n");
  printf("%d\n", list_get_elem_at(l, 0));



  printf("Returns the index at which the given element appears");
  printf("\n");
  list_add_to_back(l, 9);
  list_add_to_back(l, 8);
  list_add_to_back(l, 7);
  list_print(l);
  printf("\n");
  printf("%d",list_get_index_of(l, 9));
  // return 0;

  
  
}
