#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < 2*n-i-1; ++j)
      if (j < n-i-1) printf("~");
      else
        if (j == n-i-1 || j == 2*n-i-2 || i == 0 || i == n-1)
        {
          printf("*");
        }
        else
        {
          printf(".");
        }
    printf("\n");
  }
  //Toanr
  return 0;
}
