#include <stdio.h>

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a%b);
}

struct PS {
    int tu;
    int mau;
};

struct PS rutgon(struct PS a) {
    struct PS x;
    x.tu = a.tu / UCLN(a.tu, a.mau);
    x.mau = a.mau / UCLN(a.tu, a.mau);
    return x;
}

void print(struct PS a, struct PS b) {
    a = rutgon(a);
    b = rutgon(b);
    int x = a.mau * b.mau / UCLN(a.mau, b.mau);
    a.tu = a.tu*x/a.mau;
    b.tu = b.tu*x/b.mau;
    a.mau = b.mau = x;
    printf("%d/%d %d/%d\n", a.tu, x, b.tu, x);
    struct PS c;
    c.tu = a.tu + b.tu;
    c.mau = x;
    c = rutgon(c);
    printf("%d/%d\n", c.tu, c.mau);
    c.tu = a.tu;
    c.mau = b.tu;
    c = rutgon(c);
    printf("%d/%d\n", c.tu, c.mau);
}

int main() {
    int t, d = 1;
    scanf("%d", &t);
    struct PS a, b;
    while (t--)
    {
        scanf("%d %d %d %d", &a.tu, &a.mau, &b.tu, &b.mau);
        printf("Case #%d:\n", d++);
        print(a, b);
    }
    return 0;
}
