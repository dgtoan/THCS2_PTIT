#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = n-k; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < n-k; i++)
        printf("%d ", a[i]);
    //Toanr
    return 0;
}
