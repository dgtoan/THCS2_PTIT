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

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
      scanf("%d", &a);
      if (nt(a)) printf("%d ", a);
    }
    printf("\n");
  }
  
  //Toanr
  return 0;
}
