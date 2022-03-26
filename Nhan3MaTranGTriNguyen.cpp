#include <stdio.h>

void cin(int x[105][105], int m, int n){
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &x[i][j]);
}

int main() {
    int m, n, p, q, a[105][105], b[105][105], c[105][105], s[105][105];
    scanf("%d %d %d %d", &m, &n, &p, &q);
    cin(a, m, n);
    cin(b, n, p);
    cin(c, p, q);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
        {
            int t = 0;
            for (int z = 0; z < n; z++)
                t += a[i][z] * b[z][j];
            s[i][j] = t;
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int t = 0;
            for (int z = 0; z < p; z++)
                t += s[i][z] * c[z][j];
            printf("%d ", t);
        }
        printf("\n");
    }
    //Toanr
    return 0;
}
