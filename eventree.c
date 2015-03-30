#include <stdio.h>

#define MAXN 100

int tree[MAXN][MAXN];
int visited[MAXN];
int count;

int dfs(int n, int v) {
  int i, j, sub, result;

  visited[n] = 1;
  result = 0;

  for (i=0; i<v; i++) {
    if (tree[n][i] == 1 && visited[i] == 0) {
      sub = dfs(i,v);
      if (sub % 2 == 0)
        count++;
      result += sub;
    }
  }
  result++;
  return result;
}

int main() {
  int i, e, v, v1, v2;

  scanf("%d %d", &v, &e);

  for (i=0; i<e; i++) {
    scanf("%d %d", &v1, &v2);
    tree[v1-1][v2-1] = 1;
    tree[v2-1][v1-1] = 1;
  }

  dfs(0, v);
  printf("%d\n", count);

  return 0;
}
