#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  for (int i = a-1; i >= 0; i--)
  {
    for (int j = i; j <= i*2; j++)
      printf("%c", j+64);
    printf("\n");
  }
  return 0;
}
