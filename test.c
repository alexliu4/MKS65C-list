#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"


/*
struct node head;
head = struct * node malloc(sizeof(a));
strcpy(head.value, "the head");
head.next = &(a);
*/
int main(){

  //linkedlist with nodes a,b,c
  struct node a;
  //a = * (struct node *) malloc(sizeof(struct node));
  struct node b;
  //b = * (struct node *) malloc(sizeof(struct node));
  struct node c;
  //c = * (struct node *) malloc(sizeof(struct node));
  strcpy(a.value, "hello");
  a.next = &(b);
  strcpy(b.value, "bello");
  b.next = &(c);
  strcpy(c.value, "bye");
  //printf("%s\n", a.value);

  //printing list
  c.next = 0;
  printf("\n \nThe original list:\n");
  print_list(&a);

  //inserting a new node in front and printing
  struct node * d;
  printf("\n\nThe new list \n");
  d = insert_front(&a , "NEWNEW");
  printf("%p\n", d);
  print_list(d);
  printf("\n\n\n");

  //freeing up linkedlist
  free_list(d);
  return 0;
}
