#include <stdio.h>
#include <math.h>

int dep(int n) {
    int s = 0, kt = 0, a[20], d = 0;
    while (n > 0)
    {
        a[++d] = n % 10;
        if (a[d] == 6) kt = 1;
        s += a[d];
        n /= 10;
    }
    if (!kt) return 0;
    for (int i = 1; i <= d/2; i++)
        if (a[i] != a[d-i+1]) return 0;
    if ((s % 10) == 8) return 1;
    else return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    for (int i = a; i <= b; i++)
        if (dep(i)) printf("%d ", i);
    //Toanr
    return 0;
}