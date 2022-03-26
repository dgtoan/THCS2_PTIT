#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, a[1005], kt = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
      scanf("%d", &a[i]);
    for (int i = 0; i < n/2; ++i)
      if (a[i] != a[n-i-1])
      {
        printf("NO\n");
        kt = 0;
        break;
      }
      if (kt) printf("YES\n");
  }
  
  //Toanr
  return 0;
}
