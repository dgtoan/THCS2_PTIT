#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  long long a[50];
  a[0] = 0;
  a[1] = 1;
  int n;
  scanf("%d", &n);
  for (int i = 2; i < n; ++i)
    a[i] = a[i-1] + a[i-2];
  for (int i = 0; i < n; ++i)
    printf("%lld ", a[i]);
  //Toanr
  return 0;
}
