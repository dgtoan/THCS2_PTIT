#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int sum(int n) {
    int s = 0;
    while (n > 0)
    {
        s = s + n % 10;
        n /= 10;
    }
    return s; 
}

int ntcs(int n) {
    while (n > 0)
    {
        int c = n % 10;
        if (!nt(c)) return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        int a, b, d = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++)
            // if (nt(i) && nt(sum(i)) && ntcs(i)) ++d;
            if (ntcs(i))
            {
                if (nt(sum(i)))
                {
                    if (nt(i))
                    {
                        ++d;
                    }
                    
                }
                
            }
            
        printf("%d\n", d); 
    }
    // Toanr
    return 0;
}
