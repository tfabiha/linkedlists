#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node * next; };


void print_list( struct node * li );
struct node * insert_front( struct node * li, int x );
struct node * free_list( struct node * li );
