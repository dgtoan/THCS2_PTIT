#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        char s[12];
        scanf("%s", s);
        if (s[0] == s[strlen(s)-1])
            printf("YES");
        else printf("NO");   
        printf("\n");  
    }
    // Toanr
    return 0;
}
