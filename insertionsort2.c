#include <stdio.h>

// Feel like I want to redo this without reference.

void print_array(int ar[], int s) {
  for (int i=0; i<s; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");
}

void swap(int *i, int *j) {
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

void insertion_sort(int ar[], int s) {
  int i, j;
  for (i=1; i < s; i++) {
    j=i;
    while ((j>0) && (ar[j] < ar[j-1])) {
      swap(&ar[j], &ar[j-1]);
      j = j-1;
    }
    print_array(ar, s);
  }
} 

int main() {
  int i, s;
  scanf("%d", &s);
  int ar[s-1];
  for (i=0; i<s; i++) {
    scanf("%d", &ar[i]);
  }
  insertion_sort(ar, s);
  return 0;
}
