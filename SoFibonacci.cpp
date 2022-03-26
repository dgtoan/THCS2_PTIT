#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  long long fibo[100];
  fibo[0] = 0;
  fibo[1] = 1;
  for (int i = 2; i < 93; ++i)
    fibo[i] = fibo[i-1] + fibo[i-2];
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibo[n]);
  }
  
  //Toanr
  return 0;
}
