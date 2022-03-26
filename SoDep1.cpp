#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int n) {
  int s = 0;
  while (n > 0) {
    s = s + (n%10);
    n /= 10;
  }
  return s;
}

int nt(int n) {
  if (n < 2) return 0;
  for (int i = 2; i <= sqrt(n); ++i)
    if (n % i == 0) return 0;
  return 1;
}

int main()
{
  int a, b, fibo[10005] = {0};
  scanf("%d %d", &a, &b);
  int f1 = 1, f2 = 2;
  fibo[2] = 1;
  if (a > b)
  {
    int t = a;
    a = b;
    b = t;
  }
  while (f2 < 1000) {
    int temp = f1;
    f1 = f2;
    f2 = f1 + temp;
    fibo[f2] = 1;
  }
  for (int i = a; i <= b; ++i)
    if (nt(i) && fibo[sum(i)]) printf("%d ", i);
  //Toanr
  return 0;
}
