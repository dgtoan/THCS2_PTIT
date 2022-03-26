#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, a[1005], max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
      scanf("%d", &a[i]);
      max = a[i] > max ? a[i] : max;
    }
    printf("%d\n", max);
    for (int i = 0; i < n; ++i)
    if (a[i] == max) printf("%d ", i);
    printf("\n");   
  }
  
  //Toanr
  return 0;
}
