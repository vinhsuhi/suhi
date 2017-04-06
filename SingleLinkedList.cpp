// Linked-base Representation of Linear List
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
typedef int element_type;
// Initalize the singlelinkedllist struct at an element
typedef struct pointer_type{
  element_type Inf;
  pointer_type *Next;
};

typedef struct list{
  pointer_type *head;
  pointer_type *tail;
}LIST;

// Insert an item at after node pred;
int insert_middle(pointer_type *pred,element_type X){
  pointer_type *Node;
  Node = (pointer_type*) malloc(sizeof(pointer_type));
  Node->element_type = X;
  Node->Next = pred->Next;
  pred->Next = Node;
  return 1;
}
// Insert to head
int insert_head(element_type X,pointer_type *Head){
  pointer_type *Node;
  Node = (pointer_type*) malloc(sizeof(pointer_type));
  Node->element_type = X;
  Node->Next = Head->Next;
  Head->Next = Node;
  return 1;
}
// Retrieve 
int main()
{
  LIST L;
}
