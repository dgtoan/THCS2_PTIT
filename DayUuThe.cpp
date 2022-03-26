#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100005];
        scanf("\n");
        gets(s);
        strcat(s, " ");
        int n = strlen(s), d, l, c;
        d = l = c = 0;
        for (int i = 1; i < n; i++)
            if (s[i-1] != ' ' && s[i] == ' ')
            {
                d++;
                if (s[i-1] % 2) l++;
                else c++;
            }
        if ((d%2 && (l > c)) || (!(d%2) && (c > l)))
            printf("YES\n");
        else printf("NO\n"); 
    }
    return 0;
}