#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = a-1; i>= 0; i--)
  {
    for (int j = i; j < b; j++)
      printf("%c", j+65);
    int d;
    if (i <= b) d = i;
    else d = b;
    for (int j = 0; j < d; j++)
      printf("%c", b+64);
    printf("\n");
  }
  return 0;
}
