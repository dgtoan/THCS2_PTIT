#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], b[100005], d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ++b[a[i]];
    }
    for (int i = 0; i < n; i++)
        if (b[a[i]] == 1) ++d;
    printf("%d\n", d);
    for (int i = 0; i < n; i++)
        if (b[a[i]] == 1) printf("%d ", a[i]);
    //Toanr
    return 0;
}
