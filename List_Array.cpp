// array-based Representation of Linear List
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define maxlength 1000;
typedef int element_type;
// Initialize the array_based_list
typedef struct{
  element_type Inf[maxlength];
  int last;
}LIST;
// Insert an item at position p
void insert(int p, element_type X,LIST *L){
  for(int i=L->last;i>=p;i++){
    L->Inf[i+1] = L->Inf[i];
  }
  L->Inf[p] = X;
  L->last = L->last + 1;
}
// Locate(x,L) Locate the position of x in L;
int locate(elemetn_type X,LIST *L){
  int counter = 0;
  int array_position[1000];
  for(int i=0;i<=L.last;i++){
    if(L->Inf[i]==X){
      array_position[counter] = i;
      counter ++;
    }
    if(counter==0)
      return 0;
    else
      return array_position;
  }
}
// Retrieve(p,L) 
int retrieve(int p,LIST *L){
  if(0<=p<=L->last)
    return L->Inf[p];
  else
    return 0;
}
//Delete(p,L)
int Delete(int p,LIST *L){
  if(0<=p<=L->last){
    for(int i=p;i<L->last){
      L->Inf[i]=L->Inf[i+1];
    }
    L->last = L->last - 1;
    return 1;
  }
  else
    return 0;
}
//Next(p,L)

int main()
{
  LIST L;
}
