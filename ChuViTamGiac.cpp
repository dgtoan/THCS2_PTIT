#include <stdio.h>
#include <math.h>

struct TD {
    double x;
    double y;
};

struct D {
    struct TD a;
    struct TD b;
    struct TD c;
    double da;
    double db;
    double dc;
};

double bp(double n) {
    return n * n;
}

int main() {
    int n;
    struct D t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf%lf%lf%lf%lf%lf", &t.a.x, &t.a.y, &t.b.x, &t.b.y, &t.c.x, &t.c.y);
        t.da = sqrt(bp(t.a.x - t.b.x) + bp(t.a.y - t.b.y));
        t.db = sqrt(bp(t.c.x - t.b.x) + bp(t.c.y - t.b.y));
        t.dc = sqrt(bp(t.c.x - t.a.x) + bp(t.c.y - t.a.y));
        if (
            t.da + t.db <= t.dc ||
            t.db + t.dc <= t.da ||
            t.dc + t.da <= t.db
        )
        {
            printf("INVALID\n");
            continue;
        }
        printf("%.3lf\n", t.da + t.db + t.dc);
    }
    return 0;
}
