#include <stdio.h>
#include <string.h>
#include <math.h>

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
      if (!(a%2)) printf("%d ", a);
    }
    printf("\n");
  }
  
  //Toanr
  return 0;
}
