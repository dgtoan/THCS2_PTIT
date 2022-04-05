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
        for (int j = 0; j < m; j++)
        {
            int k = j;
            if (j == a)
                k = b;
            if (j == b)
                k = a;
            printf("%d ", x[i][k]);
        }
        printf("\n");
    }
    return 0;
}
