#include <stdio.h>
#include <string.h>

// Code by Cao Viet Duc

void dichso(char s[], int len)
{
    for(int i = len + 1; i >= 2; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = '0';
    s[1] = '0';
}

void plus(char s[], char s1[], int sos1, char s2[], int sos2)
{
    if(sos1 > sos2) 
    {
        for(int i = sos1; i >= 0; i--)
        {
            if(i >= sos1 - sos2) s2[i] = s2[i - (sos1 - sos2)];
            else s2[i] = '0';
        }
    }
    else if(sos1 < sos2)
    {
        for(int i = sos2; i >= 0; i--)
        {
            if(i >= sos2 - sos1) s1[i] = s1[i - (sos2 - sos1)];
            else s1[i] = '0';
        }
    }
    int len = sos1 > sos2 ? sos1 : sos2;
    s[len] = '\0';
    int nho = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        int temp = (int)((s1[i] - '0') + (s2[i] - '0') + nho) % 10;
        if((i == 0 ||len == 1) && (int)((s1[i] - '0') + (s2[i] - '0') + nho) / 10 != 0)
        {
            dichso(s, len);
            s[1] = (char) temp + '0';
        }
        else s[i] = (char) temp + '0';
        nho = (int)((s1[i] - '0') + (s2[i] - '0') + nho) / 10;
    }
    if(s[0] == '0') s[0] = (char) nho + '0';
}

void nhandoi(char s[], char c[]) {
    int sos = strlen(s);
    for(int i = 0; i < 2 * sos; i++) {
        if(i < sos) c[i] = s[i];
        else c[i] = s[i - sos];
    }
}

int search(char s1[], char s2[]) {
    int sos1 = strlen(s1);
    int sos2 = strlen(s2);
    for(int i = 0; i < sos1; i++) {
        if(s1[i] == s2[0]) {
            int test = 1;
            for(int ind = 0; ind < sos2; ind++, i++) {
                if(s1[i] != s2[ind]) {
                    test = 0;
                    i--;
                    break;
                }
            }
            if(test) return 1;
        }
    }
    return 0;
}

int main()
{
    int t = 0;
    scanf("%d\n", &t);
    while (t--)
    {
        int test = 1;
        char s[1005] = {'0'};
        char s1[1005] =  {};
        char s2[1005] = {};
        char s1nhandoi[1005] = {};
        gets(s1);
        strcpy(s2, s1);
        strcpy(s, s1);
        nhandoi(s1, s1nhandoi);
        int sos1 = strlen(s1);
        for(int i = 1; i < sos1; i++) {
            plus(s, s2, strlen(s2), s1, strlen(s1));
            if(search(s1nhandoi, s) == 0) {
                test = 0;
                break;
            }
            strcpy(s2, s);
        }
        if(test) printf("YES\n");
        else printf("NO\n");
    }
}