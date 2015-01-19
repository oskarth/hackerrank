#include <stdio.h>

void printArray(int ar[], int s) {
  for (int i=0; i<s; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");
}

int main() {
  int i, s;
  scanf("%d", &s);
  int ar[s];

  for (i=0; i<s; i++) {
    scanf("%d", &ar[i]);
  }

  int temp = ar[s];
  printArray(ar, s);
  //if (ar[s-i] < temp) 
  ar[i-1] = ar[i-2];
  //printf("%d\n", ar[s-2]); 

  // then put other old one in its stead
  // and iterate backwards doing the same procedure

  printArray(ar, s);

  return 0;
}
