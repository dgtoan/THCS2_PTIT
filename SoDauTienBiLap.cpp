#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[1000005], kt = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
                if (a[i] == a[j])
                {
                    printf("%d\n", a[i]);
                    kt = 1;
                    break;
                }
            if (kt) break;
        }
        if (!kt) printf("NO\n");
    }
    return 0;
}
