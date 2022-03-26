#include <stdio.h>

void xuli(int x[105], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
            if (x[i] > x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        printf("%d ", x[i]);
    }
            
}

int main()
{
    int n, x, a[105], b[105], c = 0, l = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x%2) b[l++] = x;
        else a[c++] = x;
    }
    xuli(a, c);
    xuli(b, l);
    //Toanr
    return 0;
}
