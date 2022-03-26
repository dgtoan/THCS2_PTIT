#include <stdio.h>

void qs(int a[100005], int l, int r) {
    int i = l, j = r,
        x = a[(l+r) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            ++i;
            --j;
        }   
    }
    if (l < j) qs(a, l, j);
    if (i < r) qs(a, i, r);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100005], m = 2000000005, d = 0, td;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qs(a, 0, n-1);
        for (int i = 1; i < n; i++)
        {
            td = a[i]-a[i-1];
            if (td == m) ++d;
            else if (td < m)
            {
                m = td;
                d = 1;
            }
        }
        printf("%d %d\n", m, d);      
    }
    return 0;
}