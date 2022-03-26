#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[1005], b[100005] = {0}, max = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            ++b[a[i]];
            max = b[a[i]] > max ? b[a[i]] : max;
        }
        for (int i = 0; i < n; i++)
            if (b[a[i]] == max)
            {
                printf("%d ", a[i]);
                b[a[i]] = 0;
            }
        printf("\n");
    }
    //Toanr
    return 0;
}
