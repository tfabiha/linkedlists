#include <stdio.h>
#include <stdlib.h>

#include "linked.h"

int main()
{
  //TESTING INSERT_FRONT FUNCTION
  printf("===================================================\n");
  printf("\n");

  printf("TESTING INSERT_FRONT FUNCTION\n");
  printf("CREATING NEW LINKED LIST P AND ADDING A NEW NODE\n");
  printf("\n");

  struct node * p = insert_front( NULL, 5 );

  printf("FIRST ITEM OF THE LIST IS: %d\n", p->i);

  printf("\n");
  printf("ADDING ANOTHER NODE TO LLIST P\n");

  p = insert_front( p, 10);

  printf("\n");
  printf("FIRST ITEM OF THE LIST IS: %d\n", p->i);
  printf("SECOND ITEM OF THE LIST IS: %d\n", p->next->i);

  printf("\n");
  printf("===================================================\n");
  printf("\n");

  printf("TESTING PRINT_LIST FUNCTION\n");
  printf("PRINTING LLIST P\n");
  printf("\n");

  print_list(p);

  printf("\n");
  printf("===================================================\n");
  printf("\n");

  free_list(p);

  printf("\n");
  printf("===================================================\n");

  return 0;
}
