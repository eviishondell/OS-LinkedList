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
  // return 0;
  
}
