#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; ++i)
  {
    printf("%d", i+1);
    for (int j = i+2; j <= b; ++j)
      printf("%d", j);
    int d;
    if (d < b - 1) d = i;
    for (int j = d; j > 0; --j)
      printf("%d", j);
    printf("\n");
  }
  //Toanr
  return 0;
}
