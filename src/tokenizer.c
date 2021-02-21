#include "tokenizer.h"

int space_char(char c){
  if(c == ' ' || c == '\t' || c == '\n') // true if  c is a tab or space, and not zero.
    return 1;
  return 0;
}

int non_space_char(char c){
  if( c != ' ' || c !='\t' || c !='\n') //true if c is not a tab or space, not zero.
    return 1;
  return 0;

}

char *word_start(char *str){
  while(space_char(*str)){
    str++;
  }
  return str;
}

char *word_end(char *str){
  while(non_space_char(*str)){
    str++;
  }
  if (*str == '\0'){
    return 0;
  }
  return str;
}
