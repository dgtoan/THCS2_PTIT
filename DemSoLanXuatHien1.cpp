#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], b[100005];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ++b[a[i]];
    }
    for (int i = 0; i < n; i++)
        if (b[a[i]] > 0)
        {
            printf("%d %d\n", a[i], b[a[i]]);
            b[a[i]] = 0;
        }
    //Toanr
    return 0;
}
