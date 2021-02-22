#include "tokenizer.h"
#include <stdio.h>

void main(){
  //use to test fucntionality
}

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
  while(non_space_char(*str) && *str != '\0'){  // *str != '\0', pointer not at zero char.
    str++;
  }
  return str;
}

int count_words(char *str){
  int count = 0;
  while (*str != '\0'){
    str = word_start(str);
    str = word_end(str);
    count++;
  }
  return count;
}
