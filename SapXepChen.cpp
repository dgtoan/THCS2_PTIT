#include <stdio.h>

int main() {
  int n, a[105], b[105], l = 0, m = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Buoc 0: %d\n", b[0] = a[0]);
  for (int i = 1; i < n; i++)
  {
    int j = i-1, h = a[i];
    printf("Buoc %d:", i);
    while (j >= 0 && h < a[j])
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = h;
    for (int j = 0; j <= i; j++)
      printf(" %d", a[j]);
    printf("\n");
  }
  
}
