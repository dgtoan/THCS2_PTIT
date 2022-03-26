#include <stdio.h>
#include <string.h>
#include <math.h>

long long ucln(long long a, long long b) {
  while (a*b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a + b;
}

int main()
{
  long long a, b;
  scanf("%lld %lld", &a, &b);
  long long u = ucln(a, b);
  printf("%lld\n%lld\n", u, a*b/u);
  //Toanr
  return 0;
}
