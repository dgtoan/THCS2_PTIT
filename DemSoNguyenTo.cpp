#include <stdio.h>
#include <string.h>
#include <math.h>

int nt (int n) {
  if (n < 2) return 0;
  int can = sqrt(n);
  for (int i = 2; i <= can; ++i)
    if (n % i == 0) return 0;
  return 1;
}

int ntcs(int n) {
  while (n > 0) {
    if (!(nt(n%10))) return 0;
    n /= 10;
  }
  return 1;
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int a, b, d = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i)
      if (nt(i) && ntcs(i)) ++d;
    printf("%d\n", d);
  }
  
  //Toanr
  return 0;
}
