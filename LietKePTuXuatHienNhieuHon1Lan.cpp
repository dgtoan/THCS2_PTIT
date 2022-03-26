#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], b[100005], c[105], d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ++b[a[i]];
    }
    for (int i = 0; i < n; i++)
        if (b[a[i]] > 1)
        {
            c[d++] = a[i];
            b[a[i]] = 0;
        }
    printf("%d\n", d);
    for (int i = 0; i < d; i++)
        printf("%d ", c[i]);
    //Toanr
    return 0;
}
