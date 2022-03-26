#include <stdio.h>
#include <math.h>
#include <string.h>

int dx(char s[600]) {
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        if (s[i] != s[n-i-1]) return 0;
    return 1;
}

int cs(char s[600]) {
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
        if (
            s[i] != '2' &&
            s[i] != '3' &&
            s[i] != '5' &&
            s[i] != '7'
        ) return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[600];
        scanf("\n");
        gets(s);
        if (dx(s) && cs(s)) printf("YES\n");
        else printf("NO\n");
    }
    //Toanr
    return 0;
}
