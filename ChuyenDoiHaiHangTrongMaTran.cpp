#include <stdio.h>

int main() {
    int n, m, a, b, x[105][105];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &x[i][j]);\
    scanf("%d%d", &a, &b);
    a--;
    b--;
    for (int i = 0; i < n; i++)
    {
        int k = i;
        if (i == a)
            k = b;
        if (i == b)
            k = a;
        for (int j = 0; j < m; j++)
            printf("%d ", x[k][j]);
        printf("\n");
    }
    return 0;
}
