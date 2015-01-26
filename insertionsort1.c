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
  int ar[s-1];

  for (i=0; i<s; i++) {
    scanf("%d", &ar[i]);
  }

  int temp = ar[s-1];
  int j=0;

  while (temp < ar[s-2-j]) {
    ar[s-1-j] = ar[s-2-j];
    j++;
    printArray(ar, s);
  }
  ar[s-1-j] = temp;
  printArray(ar, s);

  return 0;
}
