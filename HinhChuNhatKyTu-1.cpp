#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++)
  {
    int d = a > b ? a : b;
    int m = d;
    for (int j = b; j > 0; j--)
    {
      if (j < b-i) printf("%c", m-i+96);
      else printf("%c", d+96);
      d--;
    }
  printf("\n");
  }
  return 0;
}
