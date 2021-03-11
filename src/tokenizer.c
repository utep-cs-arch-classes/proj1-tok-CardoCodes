#include "tokenizer.h"
#include <stdlib.h>
#include <stdio.h>

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
  printf("\n Word Start: %c", *str);
  return str;
}

char *word_end(char *str){
  while(non_space_char(*str)){  // *str != '\0', pointer not at zero char.
    str++;
  }
  return str;
}

int count_words(char *str){
  int count = 0;
  while (*str != '\n'){
    str = word_end(str);
    count++;
  }
  return count;
}

char *copy_str(char *inStr, short len){
  int counter = 0;
  char *copy = (char*) malloc((len+1)*sizeof(char*));
  while(counter<len){
    copy[counter] = inStr[counter];
    counter++;
  }
  copy[counter] ='\0';
  return copy;
}

char **tokenize(char *str){
  char **tokenized;
  tokenized = (char**)malloc((count_words(str)+1)*sizeof(char*));
  char *begin;
  char *end;

  int len = 0;
  begin = word_start(str);
  int read = 0;
  
  while(read <= count_words(str)){
    end = word_end(begin);
    len = end-begin;
    tokenized[read] = copy_str(begin, len);
    begin = word_start(end);

    read++;
  }

  return tokenized;
}

void print_token(char **tokens){
  for(int t=0; tokens[t]!="\0";t++){
    printf("Tokens: %s \n", tokens[t]);
  }
}

void free_tokens(char **tokens){
  int t = 0;
  while(tokens[t]){
    printf("%s", tokens[t]);
    free(tokens[t]);
    t++;
  }
  free(tokens); //free all tokens
}




