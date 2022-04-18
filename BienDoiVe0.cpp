#include <stdio.h>
#include <string.h>

int main() {
    int n, a[15][15], x, y, sum = 0, kt = 1, d = 0;
    scanf("%d", &n);
    scanf("\n");
    for (int i = 0; i < n; i++)
    {
        char s[20];
        gets(s);
        for (int j = 0; j < strlen(s); j++)
            a[i][j] = s[j] - 48;
    }
    while (kt)
    {
        sum = -1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][j] && i + j > sum)
                {
                    sum = i + j;
                    x = i + 1;
                    y = j + 1;
                }
        if (sum == -1)
        {
            kt = 0;
            break;
        }
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                if (a[i][j]) a[i][j] = 0;
                else a[i][j] = 1;
        d++;
    }
    printf("%d\n", d);
    return 0;
}
