#include <stdio.h>

struct HS {
    int ma;
    char ten[100];
    char sn[100];
    double a;
    double b;
    double c;
    double s;
};

int main() {
    int n;
    struct HS x[1005];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("\n");
        x[i].ma = i;
        gets(x[i].ten);
        gets(x[i].sn);
        scanf("%lf", &x[i].a);
        scanf("%lf", &x[i].b);
        scanf("%lf", &x[i].c);
        x[i].s = x[i].a + x[i].b + x[i].c;
    }
    for(int i = 1; i <= n; i++)
        for(int j = i+1; j <= n; j++)
            if (x[i].s <= x[j].s) {
                if (x[i].s == x[j].s && x[i].ma < x[j].ma) continue;
                struct HS t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
    for(int i = 1; i <= n; i++)
        printf("%d %s %s %.1lf\n", x[i].ma, x[i].ten, x[i].sn, x[i].s);
    return 0;
}
