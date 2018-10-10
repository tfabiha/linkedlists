#include <stdio.h>
#include <stdlib.h>

#include "linked.h"

void print_list( struct node * li )
{
  //while it isnt the last node
  while( li->next )
  {
    printf("%d => ", li->i); //print item it contains
    li = li->next; //iterate to next node
  }

  printf("%d => ", li->i); //print item at last node
  printf("null\n"); //print null to signal end
}

struct node * insert_front( struct node * li, int x )
{
  //creates a pointer temp and allocates a heap memory to it
  struct node * temp = malloc( sizeof( struct node ) );

  //sets variables to given parameters
  temp->i = x;
  temp->next = li;

  //returns pointer to the struct
  return temp;
}

struct node * free_list( struct node * li )
{
  struct node * temp = li;
  struct node * curr = li;

  while (curr->next)
  {
    curr = curr->next;
    printf("FREEING %d\n", temp->i);
    free(temp);
    temp = curr;
  }

  curr = curr->next;
  printf("FREEING %d\n", temp->i);
  free(temp);

  return curr;
}
