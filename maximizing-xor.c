#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int maxXor(int l, int r) {
  int i, max;

  for (i=0; i <
         
  return l ^ r;
}

int main() {
  int l, r, res;
  
  scanf("%d %d", &l, &r);
  
  res = maxXor(l, r);
  printf("%d", res);
  
  return 0;
}
