#include <stdio.h>

int main () {
  int i, j, t, n;
  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d", &n); // number of towns
    int routes[n-1];
    int paths = 1;

    for (j = 0; j < (n-1); j++) {
      scanf("%d ", &routes[j]); // number of routes from j to j+1
      paths = (paths * routes[j]) % 1234567;
    }

    printf("%d\n", paths);
  }
}
