#include <stdio.h>

int main() {
    int t;
    char a[1005][1005];
    scanf("%d", &t);
    
    while (t--) {
        long long n, m,
            s = 0,
            b[4][1005] = {0};
        scanf("%lld%lld", &n, &m);
        scanf("\n");

        for(int i = 0; i < n; i++)
            gets(a[i]);

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if (a[i][j] == '1') {
                    b[0][i]++;
                    b[1][j]++;
                }
                if (a[i][j] == '2') {
                    b[2][i]++;
                    b[3][j]++;
                }
            }

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if (a[i][j] == '1')
                    s += b[2][i]*b[3][j];

                if (a[i][j] == '2')
                    s += b[0][i]*b[1][j];
            }

        printf("%lld\n", s);
    }
}
