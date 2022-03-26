#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    if (n <= 1)
    {
      printf("YES\n");
    }
    else
    {
      if ((int)sqrt(n) == sqrt(n))
      {
        printf("YES\n");
      }
      else
      {
        printf("NO\n");
      }
    }
  }
  //Toanr
  return 0;
}
