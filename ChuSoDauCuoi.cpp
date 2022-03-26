#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char s[12];
    scanf("%s", s);
    printf("%c %c\n", s[0], s[strlen(s)-1]);
    // Toanr
    return 0;
}
