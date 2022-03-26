#include <stdio.h>

int main() {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != -1)
    {
        if (a > b) {
            int t = a;
            a = b;
            b = t;
        }
        long long d, c, i, step;
        c = d = i = 0;
        step = 1;
        long long k = b - a;
        while (d < k)
        {
            c++;
            if (i)
            {
                d += step;
                i = 0;
                step++;
            }
            else
            {
                d += step;
                i++;
            }
        }
        printf("%lld\n", c);
    }
    //Toanr
    return 0;
}
