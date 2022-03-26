#include <stdio.h>
#include <string.h>
#include <math.h>

int a[1000005] = {0};

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 2; i*i < n; i++)
      if (!a[i])
      {
          for (int j = i*i; j <= n; j += i)
              a[j] = 1;
      }
  for (int i = 2; i <= n; ++i)
    if (!a[i]) printf("%d\n", i);
  //Toanr
  return 0;
}
