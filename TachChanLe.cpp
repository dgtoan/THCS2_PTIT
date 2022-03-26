#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (!(a[i]%2)) printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
        if (a[i]%2) printf("%d ", a[i]);
    //Toanr
    return 0;
}
