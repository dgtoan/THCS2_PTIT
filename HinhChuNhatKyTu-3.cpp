#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++)
  {
    for (int j = i; j < b; j++)
      printf("%c", j+64);
    int d;
    if (i <= b) d = i;
    else d = b;
    for (int j = 0; j < d; j++)
      printf("%c", b+63);
    printf("\n");
  }
  return 0;
}
