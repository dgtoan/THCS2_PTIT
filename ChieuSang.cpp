#include <stdio.h>

int main() {
    int n, m, k, a[1005],
        d[10005] = {0},
        dem = 0,
        kq = 0;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        for (int j = a[i]-k; j <= a[i] + k; j++)
            d[j] = 1;
    }
    d[n+1] = 1;
    for (int i = 1; i <= n; i++)
        if (!d[i])
        {
            dem++;
            if (d[i+1] && dem)
            {
                if (dem % (k * 2 + 1))
                    kq = kq + dem / (k * 2 + 1) + 1;
                else
                    kq = kq + dem / (k * 2 + 1);
                dem = 0;
            }
        }
    printf("%d\n", kq);
    return 0;
}