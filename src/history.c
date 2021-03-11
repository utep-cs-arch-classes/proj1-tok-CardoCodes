#inlcude "history.h"
#include <stdio.h>
#include <stdlib.h>

List* init_history(){
  List *list = (List *) malloc(sizeof(List));
  list = (List*) malloc(sizeof(List)*1);
  list->root = (Item*) malloc(sizeof(Item)*1);
  return list;
}

void add_history(List *list, char *str){
  Item *current = list->root;
  int id = 1;
  while(current->null != NULL){
    current = current->next;
    id++;
  }
  current->next = (Item*)malloc(sizeof(Item));
  current = current->next;
  current->id = id;
  current->str = str;
  current->next = NULL;
}

void *get_history(List *list, int id){

}

void print_history(List *list){

}

void free_history(List *list){

}
