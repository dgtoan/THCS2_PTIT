#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a[100], d = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i < n; i++)
        {
            int kt = 1;
            for (int j = 0; j < i; j++)
                if (a[i] < a[j])
                {
                    kt = 0;
                    break;
                }
            if (kt) ++d;
        }
        printf("%d\n", d);
    }
    //Toanr
    return 0;
}
