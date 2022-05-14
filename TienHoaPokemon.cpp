#include <stdio.h>

struct P {
    char ten[1000];
    int k;
    int m;
    int d;
};

int main() {
    int n, s = 0, max = 0;
    struct P x[100];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("\n");
        gets(x[i].ten);
        scanf("%d%d", &x[i].k, &x[i].m);
        x[i].d = 0;
        while (x[i].m >= x[i].k) {
            x[i].m = x[i].m - x[i].k + 2;
            x[i].d++;
            max = max > x[i].d ? max : x[i].d;
        }
        s += x[i].d;
    }
    printf("%d\n", s);
    for(int i = 1; i <= n; i++)
        if (x[i].d == max) {
            printf("%s\n", x[i].ten);
            break;
        }
    return 0;
}
