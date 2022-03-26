#include <stdio.h>
#include <string.h>
#include <math.h>

int nt (long long n) {
  if (n < 2) return 0;
  int can = sqrt(n);
  for (int i = 2; i <= can; ++i)
    if (n % i == 0) return 0;
  return 1;
}

int dao (int n) {
  int d = 0;
  while (n > 0) {
    d = d*10 + n % 10;
    n /= 10;
  }
  return d;
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int a, b, d = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i)
    {
      if ((dao(i) == i) && nt(i))
      {
        printf("%d ", i);
        d++;
      }
      if (d == 10) {
        d = 0;      
      printf("\n");
      }
    }
    printf("\n");
  }
  //Toanr
  return 0;
}
