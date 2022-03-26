#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; ++i)
  {
    if (i < b)
    {
      for (int j = i; j < b; ++j)
        printf("%d", j+1);
      for (int j = b; j > b-i; --j)
        printf("%d", j-1);
    }
    else
      for (int j = i; j > i-b; --j)
        printf("%d", j+1);
    printf("\n");
  }
  //Toanr
  return 0;
}
