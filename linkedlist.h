struct node{
  char value[20];
  struct node * next;
};

void print_list(struct node * cha);
struct node * insert_front(struct node *, char * adding);
struct node * free_list(struct node *);
