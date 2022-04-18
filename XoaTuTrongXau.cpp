#include <stdio.h>
#include <string.h>

int main() {
    int t, p = 1;
    scanf("%d", &t);
    while (t--)
    {
        char s1[10005], s2[10005], s3[10005];
        scanf("\n");
        gets(s1);
        gets(s2);
        strcpy(s3, s1);
        int n1 = strlen(s1),
            n2 = strlen(s2),
            k[10005] = {0};
        for (int i = 0; i < n1; i++)
            if ('A' <= s3[i] && s3[i] <= 'Z')
                s3[i] += 32;
        for (int i = 0; i < n2; i++)
            if ('A' <= s2[i] && s2[i] <= 'Z')
                s2[i] += 32;
        for (int i = 0; i < n1; i++)
            if ((i == 0 || s3[i-1] == ' ') && s3[i] != ' ' && (s3[i + n2] == ' ' || i + n2 == n1))
            {
                int t = 1;
                for (int j = 0; j < n2; j++)
                    if (s2[j] != s3[i+j])
                        t = 0;
                if (t)
                    for (int j = 0; j < n2; j++)
                        k[i+j] = 1;
            }
        printf("Test %d: ", p++);
        for (int i = 0; i < n1; i++)
            if (!k[i]) printf("%c", s1[i]);
        printf("\n");
    }
    return 0;
}
