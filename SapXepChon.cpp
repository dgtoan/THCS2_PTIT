#include <stdio.h>

int main()
{
  int n, a[105];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n-1; i++)
  {
    int imin = i;
    for (int j = i+1; j < n; j++)
      if (a[j] < a[imin])
        imin = j;
    int t = a[i];
    a[i] = a[imin];
    a[imin] = t;
    printf("Buoc %d:", i+1);
    for (int j = 0; j < n; j++)
      printf(" %d", a[j]);
    printf("\n");
  }
  return 0;
}
