#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], b[100005], kt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if ((++b[a[i]]) > 1) kt = 1;
    }
    if (kt)
    {
        for (int i = 0; i < n; i++)
            if (b[a[i]] > 1)
            {
                printf("%d ", a[i]);
                b[a[i]] = 0;
            }
    }
    else printf("0");
    //Toanr
    return 0;
}
