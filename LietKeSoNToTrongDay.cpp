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
    int n, a[105], d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (nt(a[i])) ++d;
    }
    printf("%d ", d);
    for (int i = 0; i < n; i++)
        if (nt(a[i])) printf("%d ", a[i]);   
    //Toanr
    return 0;
}
