#include <stdio.h>

int main() {
  int i, j;
  int cycles, t, height;

  scanf("%d", &t);

  // for every tree
  for (i = 0; i < t; i++) {
    height = 1;
    j = 0;
    scanf("%d", &cycles);

    while(j < cycles) {
      if (j % 2 == 1) height = height + 1; // odd
      else height = height * 2;
      j++;
    }
    printf("%d\n", height); 
  }

  return 0;
}
