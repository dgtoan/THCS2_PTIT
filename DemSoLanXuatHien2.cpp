#include <stdio.h>
#include <math.h>

int main()
{
    int t, d = 0;
    scanf("%d", &t);
    while (t--) {
        int n, a[105], b[100005];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            ++b[a[i]];
        }
        printf("Test %d:\n", ++d);
        for (int i = 0; i < n; i++)
            if (b[a[i]] > 0)
            {
                printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
                b[a[i]] = 0;
            }
    }
    //Toanr
    return 0;
}
