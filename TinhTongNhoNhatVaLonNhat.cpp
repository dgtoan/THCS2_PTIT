#include <stdio.h>
#include <string.h>
#include <math.h>

long long toInt(int a[], int n, int p) {
  long long s = 0;
  for (int i = n-1; i >= 0; --i)
  {
    int c = a[i];
    if (p == 5 && c == 6) c = 5;
    if (p == 6 && c == 5) c = 6;
    s = s*10 + c;
  }
  return s;
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--) {
    long long a, b;
    int ac[25], bc[25];
    scanf("%lld %lld", &a, &b);
    int alen = log10(a) + 1,
        blen = log10(b) + 1;
    if (!a) alen = 1;
    if (!b) blen = 1;
    for (int i = 0; i < alen; ++i)
    {
      ac[i] = a % 10;
      a /= 10;
    }
    for (int i = 0; i < blen; ++i)
    {
      bc[i] = b % 10;
      b /= 10;
    }
    printf(
      "%lld %lld\n",
      toInt(ac, alen, 5) + toInt(bc, blen, 5),
      toInt(ac, alen, 6) + toInt(bc, blen, 6)
      );
  }
  //Toanr
  return 0;
}
