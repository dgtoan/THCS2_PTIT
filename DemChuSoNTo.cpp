#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  long long n;
  scanf("%lld", &n);
  int a[15] = {0},
      c[15] = {0},
      d = 0,
      nt[10] = {0};
  nt[2] = 1;
  nt[3] = 1;
  nt[5] = 1;
  nt[7] = 1;
  while (n > 0) {
    int k = n % 10;
    if (nt[k]) c[k]++;
    a[d++] = k;
    n /= 10;
  }
  for (int i = d-1; i >= 0; --i)
    if (nt[a[i]] && c[a[i]])
    {
      printf("%d %d\n", a[i], c[a[i]]);
      c[a[i]] = 0;
    }
  //Toanr
  return 0;
}
