#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, s = 0;
    scanf("%d", &n);
    while (n > 0) {
      s = s + n % 10;
      n /= 10;
    }
    if (s % 10) printf("NO\n");
    else printf("YES\n");
  }
  
  //Toanr
  return 0;
}
