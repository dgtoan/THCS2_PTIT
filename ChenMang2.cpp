#include <stdio.h>
#include <math.h>

int main()
{
    int t, d = 0;
    scanf("%d", &t);
    while(t--) {
        int n, m, a[105], b[105], k;
        scanf("%d %d %d", &n, &m, &k);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        printf("Test %d:\n", ++d);
        for (int i = 0; i <= n; i++)
        {
            if (i == k)
            {
                for (int j = 0; j < m; j++)
                    printf("%d ", b[j]);
            }
            if (i != n) printf("%d ", a[i]);
        }
        printf("\n");
    }
    //Toanr
    return 0;
}
