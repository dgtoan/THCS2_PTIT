// code copy tu bai LoaiCacTuTrungNhau
// neu can hieu thi xem lai bai do
// code fix tum lum nen kha nguuu :v
#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    gets(s);
    strcat(s, " ");
    int n = strlen(s),
        x = 0,
        y, kt,
        k[1005] = {0},
        p[1005] = {0},
        d = 0;
    for (int i = 0; i < n; i++)
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] += 32;
    for (int i = 0; i < n-1; i++)
        if (s[i] == ' ' && !k[i])
        {
            for (int j = i; j < n; j++)
            {
                if (s[j] == ' ')
                {
                    kt = 1;
                    for (int z = x; z <= i; z++)
                        if (s[z] != s[z-x+j+1]  || k[z-x+j+1])
                            kt = 0;
                    if (kt)
                    {
                        for (int z = x; z <= i; z++)
                            k[z-x+j+1] = 1;
                        p[d]++;
                    }
                }
            }
            x = i + 1;
            while (k[x])
                x++;
            d++;
        }
    d = 0;
    for (int i = 0; i < n; i++)
        if (!k[i])
        {
            printf("%c", s[i]);
            if (s[i] == ' ')
                printf("%d\n", p[d++]+1);
        }
    return 0;
}
