#include <stdio.h>

int main() {
    int n = 1;
    while (n)
    {
        scanf("%d", &n);
        if (!n) break;
        scanf("\n");
        char s1[10005],
            s2[10005],
            s3[10005],
            s[10005] = "";
        int d, kt = 0;
        gets(s1);
        gets(s2);
        gets(s3);
        for (int x = 0; x < n*2; x++)
        {
            d = 0;
            kt = 1;
            for (int i = 0; i < n; i++)
            {
                s[d++] = s2[i];
                s[d++] = s1[i];
            }
            for (int i = 0; i < n; i++)
            {
                s1[i] = s[i];
                s2[i] = s[i+n];
            }
            for (int i = 0; i < n*2; i++)
                if (s[i] != s3[i])
                        kt = 0;
            if (kt)
            {
                printf("%d\n", x + 1);
                break;
            }
        }
        if (!kt)
            printf("-1\n");
    }
    return 0;
}
