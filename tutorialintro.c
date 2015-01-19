#include <stdio.h>

int main() {
   int i, v, n;
   scanf("%d %d", &v, &n);
   int ar[n];

   for (i = 0; i < n; i++) {
     scanf("%d", &ar[i]);
     if (v == ar[i]) printf("%d\n", i);
   } 

    return 0;
}
