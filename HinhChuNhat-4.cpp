#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int a, b, x[105][105];
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; ++i)
  {
    int d = 0;
    if (i < b)
    {
      for (int j = i; j > 0; --j) x[i][d++] = j+1;
      for (int j = 0; j < b-i; ++j) x[i][d++] = j+1;
    }
    else
      for (int j = i; j > i-b; --j) x[i][d++] = j+1;
  }
  if (a > b)
  {
    for (int i = a-1; i >=0; --i)
    {
      for (int j = 0; j < b; ++j)
        printf("%d", x[i][j]);
        printf("\n");
    }
  }
  else
  {
    for (int i = 0; i < a; ++i)
    {
      for (int j = b-1; j >=0; --j)
        printf("%d", x[i][j]);
        printf("\n");
    }
  }
  //Toanr
  return 0;
}
