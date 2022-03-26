#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, a, b, n, d[100005] = {0};
    scanf("%d", &t);
    n = --t;
    while(t--){
        scanf("%d %d", &a, &b);
        ++d[a];
        ++d[b];
    }
    if (d[a] == n || d[b] == n)
        printf("Yes\n");
    else printf("No\n");  
  //Toanr
  return 0;
}
