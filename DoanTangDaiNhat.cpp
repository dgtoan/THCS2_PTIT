#include <stdio.h>

int main() {
    int t, dem = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[105], max = 0, d[105] = {0}, j = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i < n; i++)
            if (a[i] > a[i-1])
            {
                d[j]++;
                max = d[j] > max ? d[j] : max;
            }
            else j = i;
        printf("Test %d:\n%d\n", dem++, max+1);
        for (int i = 0; i < n; i++)
            if (d[i] == max)
            {
                for (int j = i; j <= max + i; j++)
                    printf("%d ", a[j]);
                printf("\n");
            }
    }
}
