#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[105], max = -99999999;
    int max2 = max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        max = a[i] > max ? a[i] : max; 
    }
    for (int i = 0; i < n; i++)
        if (a[i] > max2 && a[i] < max)
            max2 = a[i];
    printf("%d %d\n", max, max2); 
    //Toanr
    return 0;
}
