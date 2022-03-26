#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[500];
    scanf("\n");
    gets(s);
    int c, n, k, len = strlen(s);
    c = n = k = 0;
    for (int i = 0; i < len; i++)
        if (
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z')
        ) ++c;
        else
            if (s[i] >= '0' && s[i] <= '9') ++n;
            else ++k;
    printf("%d %d %d\n", c, n, k);
    //Toanr
    return 0;
}
