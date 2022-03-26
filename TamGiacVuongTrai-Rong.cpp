#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j <= i; ++j)
      if (i == 0 || i == n-1 || j == 0 || j == i) printf("*");
      else printf(".");
    printf("\n");
  }
  //Toanr
  return 0;
}
