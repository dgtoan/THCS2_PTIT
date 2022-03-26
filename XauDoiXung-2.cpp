#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    gets(s);
    if (strlen(s) <= 1) printf("0\n");
    else printf("%d\n", strlen(s) - 1);
    //Toanr
    return 0;
}
