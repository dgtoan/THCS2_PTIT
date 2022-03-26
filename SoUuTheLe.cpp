#include <stdio.h>
#include <string.h>
#include <math.h>

int cs(long long n) {
  int l = 0, c = 0;
  while (n > 0){
    if ((n%10)%2) ++l;
    else ++c;
    n /= 10;
  }
  return l > c;
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    long long n;
    scanf("%lld", &n);
    if (n % 2 && cs(n)) printf("YES\n");
    else printf("NO\n");
  }
  
  //Toanr
  return 0;
}
