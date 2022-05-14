#include <stdio.h>

struct SV {
    int ma;
    char ten[1005];
    double d1;
    double d2;
    double d3;
    double sum;
};

int main() {
    int t = 0, d = 0;
    while (t != 3) {
        int n;
        struct SV a[1005];
        scanf("%d", &t);
        switch (t) {
            case 1:
                scanf("%d", &n);
                n += d;
                while (d < n) {
                    a[d].ma = d + 1;
                    scanf("\n");
                    gets(a[d].ten);
                    scanf("%lf%lf%lf", &a[d].d1, &a[d].d2, &a[d].d3);
                    a[d].sum = a[d].d1 + a[d].d2 + a[d].d3;
                    d++;
                }
                printf("%d\n", n);
                break;
            case 2:
                scanf("%d\n", &n);
                n -= 1;
                gets(a[n].ten);
                scanf("%lf%lf%lf", &a[n].d1, &a[n].d2, &a[n].d3);
                a[n].sum = a[n].d1 + a[n].d2 + a[n].d3;
                printf("%d\n", n+1);
                break;
            case 3:
                for(int i = 0; i < d; i++)
                    for(int j = i; j < d; j++)
                        if (a[j].sum < a[i].sum)
                        {
                            struct SV c = a[j];
                            a[j] = a[i];
                            a[i] = c;
                        }
                for(int i = 0; i < d; i++)
                    printf("%d %s %.1lf %.1lf %.1lf\n", a[i].ma, a[i].ten, a[i].d1, a[i].d2, a[i].d3);
                break;
        }
    }
}
