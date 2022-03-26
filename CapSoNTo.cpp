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
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n/2; ++i)
    	if (nt(i) && nt(n-i)) printf("%d %d ", i, n-i);
    printf("\n");
  }
  
  //Toanr
  return 0;
}
