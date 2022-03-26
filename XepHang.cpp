#include <stdio.h>
#define max(a, b) (a > b ? a : b)

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int n, a[105], t[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i], &t[i]);
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
                swap(&t[i], &t[j]);
            }
    int m = a[0] + t[0];
    for (int i = 1; i < n; i++)
        m = max(m, a[i]) + t[i];
    printf("%d\n", m);
    return 0;
}