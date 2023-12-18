#include <stdio.h>

int main() {
  int dice = 1;
  
  while (dice <= 100) {
    if (dice < 100) {
      printf("bigil\n");
    } else {
      printf("bigil!\n");
    }
    dice = dice + 1;
  }

  return 0;
}
