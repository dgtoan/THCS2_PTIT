#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    long long n,kt = 1;
    scanf("%lld", &n);
    while (n > 0) {
      if ((n%10) % 2 == 1)
      {
        kt = 0;
        break;
      }
      n /= 10;
    }
    if (kt) printf("YES\n");
    else printf("NO\n");
  }
  
  //Toanr
  return 0;
}
