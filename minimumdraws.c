#include <stdio.h>

int main() {
  int i, n, t;
  scanf("%d", &t);

  for (i=0; i < t; i++) {
    scanf("%d", &n);
    printf("%d\n", n+1);
  }

  return 0;
}
