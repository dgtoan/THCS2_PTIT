#include <stdio.h>

void sorta(int a[105], int n) {
  for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
      if (a[i] > a[j]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }  
}

void sortb(int a[105], int n) {
  for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
      if (a[i] < a[j]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }  
}

int main() {
  int t, d = 0;
  scanf("%d", &t);
  while (t--)
  {
    int n, a[105], b[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
      scanf("%d", &b[i]);
    sorta(a, n);
    sortb(b, n);
    printf("Test %d:\n", ++d);
    for (int i = 0; i < n; i++)
    {
      printf("%d ", a[i]);
      printf("%d ", b[i]);
    }
    printf("\n");
  }
  return 0;
}