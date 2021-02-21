#include <stdio.h>

int main(void){
  printf(">");
  char c = getchar();
  while(c != '\n'){
    putchar(c);
    c = getchar();
  }
  printf("\n");
}
