#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, d = 0;
    scanf("%d", &n);
    for (int i = 1; i*i < n; i++)
      if (!(n % i))
      {
        int c = (i % 2) ? 0 : 1;
        d += c;
        c = ((n/i) % 2) ? 0 : 1;
        d += c;
      }
    if ((int)sqrt(n) == sqrt(n) && !((int)sqrt(n) % 2)) ++d;
    printf("%d\n", d);
  }
  //Toanr
  return 0;
}
