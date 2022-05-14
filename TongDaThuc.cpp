#include <stdio.h>
#include <string.h>
#define N 10005

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a[N] = {0}, b[N] = {0}, max = 0;
        char s[N];
        scanf("\n");
        gets(s);
        for(int i = 0; i < strlen(s); i++)
            if (i == 0 || s[i-2] == '+') {
                int d = 0, m = 0, j = i;
                while ('0' <= s[j] && s[j] <= '9')
                    d = d * 10 + s[j++] - 48;
                j += 3;
                while ('0' <= s[j] && s[j] <= '9')
                    m = m * 10 + s[j++] - 48;
                a[m] = d;
                max = max > m ? max : m;
            }
        gets(s);
        for(int i = 0; i < strlen(s); i++)
            if (i == 0 || s[i-2] == '+') {
                int d = 0, m = 0, j = i;
                while ('0' <= s[j] && s[j] <= '9')
                    d = d * 10 + s[j++] - 48;
                j += 3;
                while ('0' <= s[j] && s[j] <= '9')
                    m = m * 10 + s[j++] - 48;
                b[m] = d;
                max = max > m ? max : m;
            }
        printf("%d*x^%d", a[max] + b[max], max);
        for(int i = max-1; i >= 0; i--)
            if (a[i] + b[i]) printf(" + %d*x^%d", a[i] + b[i], i);
        printf("\n");
    }
    return 0;
}
