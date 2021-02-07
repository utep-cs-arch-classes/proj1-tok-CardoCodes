#include <stdio.h>

int main(void){
  char userIn[100];
  printf(">:");
  fgets(userIn,100,stdin);
  printf(">(echo): %s", userIn);
  return 0;
}
