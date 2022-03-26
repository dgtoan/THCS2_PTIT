#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++)
  {
    for (int j = i; j < b; j++)
      printf("%c", j+65);
    int d;
    if (i-1 < b) d = i-1;
    else d = b-1;
    for (int j = d; j >= 0; j--)
      printf("%c", j+65);
    printf("\n");
  }
  return 0;
}
