#include <stdio.h>
#include <stdlib.h>

#include "linked.h"

void print_list( struct node * li )
{
  //if the list is empty prints just null and stops rest from running
  if (!li)
  {
      printf("null\n"); //print null to signal end
      return;
  }

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
  //catch just in case argument is a NULL pointer
  if (!li)
  {
      return NULL;
  }

  struct node * temp = li; //reference to the node to be removed
  struct node * curr = li->next; //reference to the node thats next

  //while u haven't hit a null pointer
  while (curr)
  {
    printf("FREEING %d\n", temp->i); //announces what you're freeing
    free(temp); //releases the node

    //moves the temp and curr to the next
    temp = curr;
    curr = curr->next;
  }

  //last node
  printf("FREEING %d\n", temp->i);
  free(temp);

  return curr; //returns NULL pointer
}
