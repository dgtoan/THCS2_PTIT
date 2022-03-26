#include <stdio.h>
#include <math.h>

void qs(long long a[100005], long long l, long long r) {
    long long i = l, j = r,
        x = a[(l+r) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            long long temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            ++i;
            --j;
        }   
    }
    if (l < j) qs(a, l, j);
    if (i < r) qs(a, i, r);
}

int tknp(long long a[10005], long long n, int l, int r) {
    int h = (l + r) / 2;
    if (a[h] == n) return 1;
    if (l >= r) return 0;
    if (a[h] < n) return tknp(a, n, h+1, r);
    if (a[h] > n) return tknp(a, n, l, h-1);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, a[5005], kt = 0;
        scanf("%lld", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            a[i] = a[i] * a[i];
        }
        qs(a, 0, n-1);
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                kt = tknp(a, a[i] + a[j], j+1, n-1);
                if (kt) break;
            }
            if (kt) break;
        }
        if (kt) printf("YES\n");
        else printf("NO\n");      
    }
    return 0;
}