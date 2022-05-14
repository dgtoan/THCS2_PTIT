#include <stdio.h>

struct SP {
    int ma;
    char ten[1000];
    char nhom[1000];
    double mua;
    double ban;
    double lai;
};

int main() {
    int n;
    struct SP a[1005];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("\n");
        a[i].ma = i;
        gets(a[i].ten);
        gets(a[i].nhom);
        scanf("%lf", &a[i].mua);
        scanf("%lf", &a[i].ban);
        a[i].lai = a[i].ban - a[i].mua;
    }
    for(int i = 1; i <= n; i++)
        for(int j = i+1; j <= n; j++)
            if (a[i].lai < a[j].lai) {
                struct SP b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
    for(int i = 1; i <= n; i++)
        printf("%d %s %s %.2lf\n", a[i].ma, a[i].ten, a[i].nhom, a[i].lai);
    return 0;
}
