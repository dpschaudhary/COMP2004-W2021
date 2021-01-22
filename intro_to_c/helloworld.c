#include <stdio.h>

int main(void) {
  printf("Hello World!\n");
  char myname[3];
  printf("Enter your name: ");
  scanf("%5s", myname);
  printf("Hello %s\n", myname);
}
