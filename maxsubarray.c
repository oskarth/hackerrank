#include <math.h>
#include <stdio.h>
#include <limits.h>

// Key idea: max so far, and compare to max at current position.
// Probably a more elegant way to do it.

int main() {
  int i, j, n, t;
  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    int a[n];
    int max_ending_here = 0;
    int max_so_far = 0;
    int sum_pos = 0;
    int max = INT_MIN;

    for (j = 0; j < n; j++) {
      scanf("%d ", &a[j]);
      max = fmax(max, a[j]);
      max_ending_here = fmax(0, max_ending_here + a[j]); 
      max_so_far = fmax(max_so_far, max_ending_here);
      sum_pos += fmax(0, a[j]);
    }
    // if all are negative, pick max 8)
    if (sum_pos == 0) sum_pos = max;
    if (max_so_far == 0) max_so_far = max;
   
    printf("%d %d\n", max_so_far, sum_pos);
  }
}
