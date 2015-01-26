#include <stdio.h>

int handshakes(int n) {
  if (n == 1) return 0;
  else if (n == 2) return 1;
  else return (n-1) + handshakes(n-1);
}

int main() {
  int i, n, t;
  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    printf("%d\n", handshakes(n));
  }

  return 0;
}
