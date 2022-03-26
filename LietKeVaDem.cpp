#include <stdio.h>

int ktra(int n) {
    int x = n % 10, y;
    n /= 10;
    while (n > 0)
    {
        y = n % 10;
        n /= 10;
        if (y > x) return 0;
        x = y;
    }
    return 1;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void qs(int x[], int y[], int l, int r) {
    int i = l, j = r,
        h = x[(l+r) / 2];
    while (i <= j)
    {
        while (x[i] < h) ++i;
        while (x[j] > h) --j;
        if (i <= j) {
            swap(&x[i], &x[j]);
            swap(&y[i], &y[j]);
            ++i;
            --j;
        }
    }
    if (i < r) qs(x, y, i, r);
    if (l < j) qs(x, y, l, j);
}

int main() {
    int a[100005],
        b[100005],
        k[100005] = {0},
        d[100005] = {0},
        n = 0,
        m = 0;
    while (scanf("%d", &a[n++]) != -1);
    --n;
    for (int i = 0; i < n; i++)
        if (!k[i])
            if (ktra(a[i]))
            {
                b[m] = a[i];
                d[m]++;
                for (int j = i+1; j < n; j++)
                    if (a[j] == a[i])
                    {
                        d[m]++;
                        k[j]++;
                    }
                m++;
            }
    qs(d, b, 0, m-1);
    for (int i = m-1; i >= 0; i--)
        printf("%d %d\n", b[i], d[i]);
    //Toanr
    return 0;
}
