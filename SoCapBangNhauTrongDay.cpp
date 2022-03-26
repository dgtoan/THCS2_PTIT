#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[50], d = 0;
        a[0] = 10000;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == a[i-1]) ++d;
        }
        printf("%d\n", d);
    }
    //Toanr
    return 0;
}
