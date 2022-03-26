#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[500];
        scanf("\n");
        gets(s);
        strcat(s, " ");
        int d = 0, len = strlen(s);
        for (int i = 1; i < len; i++)
            if (s[i] == ' ' && s[i-1] != ' ') ++d;
        printf("%d\n", d);
    }
    //Toanr
    return 0;
}
