#include <stdio.h>
#include <string.h>

int check(char s[20]) {
    int len = strlen(s),
        start = s[0] - 48,
        end = s[len-1] - 48;
    if (start != 2 * end && end != 2* start)
        return 0;
    for (int i = 1; i < len/2; i++)
        if (s[i] != s[len-i-1]) return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[20];
        scanf("\n");
        gets(s);
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
