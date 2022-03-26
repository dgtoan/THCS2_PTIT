#include <stdio.h>
#include <math.h>

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int t, d = 0;
    scanf("%d", &t);
    while (t--) {
        int n, a, b[100005] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (nt(a)) ++b[a];
        }
        printf("Test %d:\n", ++d);
        for (int i = 2; i < 100000; i++)
            if (b[i] > 0)
                printf("%d xuat hien %d lan\n", i, b[i]);
    }
    //Toanr
    return 0;
}
