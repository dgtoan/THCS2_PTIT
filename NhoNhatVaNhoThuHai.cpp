#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], min = 99999999, min2 = 99999999;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min) min = a[i];
    }
    for (int i = 0; i < n; i++)
        if (a[i] < min2 && a[i] > min) min2 = a[i];
    printf("%d %d\n", min, min2);
    //Toanr
    return 0;
}
