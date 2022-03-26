#include <stdio.h>

int main() {
    int t, d[10];
    d[0] = 1;
    d[1] = 2;
    d[2] = 5;
    d[3] = 10;
    d[4] = 20;
    d[5] = 50;
    d[6] = 100;
    d[7] = 200;
    d[8] = 500;
    d[9] = 1000;
    scanf("%d", &t);
    while (t--)
    {
        int n, dem = 0, i = 9;
        scanf("%d", &n);
        while (n > 0)
            if (n >= d[i])
            {
                n -= d[i];
                dem++;
            }
            else i--;
        printf("%d\n", dem);
    }
}
