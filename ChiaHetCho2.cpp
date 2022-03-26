#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, d;
    scanf("%d", &n);
    if (((int)sqrt(n))%2 == 0 && (int)sqrt(n) == sqrt(n)) d = 1;
    else d = 0;
    for (int i = 1; i < sqrt(n); ++i)
      if (n%i == 0)
      {
        if (i%2 == 0) ++d;
        if ((n/i)%2 == 0) ++d;
      }
    printf("%d\n", d);
  }
  
  //Toanr
  return 0;
}
