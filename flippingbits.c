#include <stdio.h>

int main() {
  int i, n, x;
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    printf("%u\n", ~x);
  }

  return 0;
}
