#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, a[105], b[105], k;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    scanf("%d", &k);
    for (int i = 0; i <= n; i++)
    {
        if (i == k)
        {
            for (int j = 0; j < m; j++)
                printf("%d ", b[j]);
        }
        if (i != n) printf("%d ", a[i]);
    }
    //Toanr
    return 0;
}
