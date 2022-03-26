#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%s", s);
    int d = -1, len = strlen(s);
    char c = s[0];
    s[0] = s[len-1];
    s[len-1] = c;
    for (int i = 0; i < len; i++)
        if (s[i] != '0')
        {
            d = i;
            break;
        }
    if (d == -1)
    {
        printf("0");
    }
    else
    {
        for (int i = d; i < len; i++)
        {
            printf("%c", s[i]);
        }
        
    }
    // Toanr
    return 0;
}
