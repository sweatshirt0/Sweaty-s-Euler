#include <stdio.h>
#include <stdlib.h>

int main () {
  int i;
  int add = 0;

  for (i = 1; i  < 1000; ++i) {

    if ((i % 3 == 0) || (i % 5 == 0)) {
      printf("%d", i);
      printf("\n");

      add += i;
    }
  }

  printf("%d", add);
  printf("\n");

  return 0;
}
