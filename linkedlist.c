#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"



void print_list(struct node * cha){
  printf("%s\n", cha -> value);
  if (cha -> next){
    return print_list(cha -> next);
  }
}

struct node * insert_front(struct node * head, char * adding){
  struct node * new;
  new = (struct node *) malloc(sizeof(struct node));
  strcpy(new -> value, adding);
  new -> next = head;
  return new;
}


struct node * free_list(struct node * a){
  while ((*a).next) {
    struct node * temp;
    temp = (*a).next;
    printf("%p\n", a);
    printf("%p\n", temp);
    printf("%p\n", (*a).next);
    free_list(a);
    a = temp;
  }
  return (&a);
}

/*
int main(){
  //list_maker();
  struct node a;
  struct node b;
  struct node c;
  strcpy(a.value, "hello");
  a.next = &(b);
  strcpy(b.value, "bello");
  b.next = &(c);
  strcpy(c.value, "bye");
  //printf("%s\n", a.value);
  print_list(&a);
  return 0;
}
*/
