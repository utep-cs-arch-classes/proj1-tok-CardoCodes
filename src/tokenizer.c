#include "tokenizer.h"

int space_char(char c){
  if(c == ' ' || c == '\t' || c == '\n') // true if  c is a tab or space, and not zero.
    return true;
  return false;
}

int non_space_char(char c){
  if( c != ' ' || c !='\t' || c !='\n') //true if c is not a tab or space, not zero.
    return true;
  return false;

}
