// Code by Cao Viet Duc

#include <stdio.h>
#include <string.h>

//     0123 
// 1234567
char s[1005];

void dichso(int len)
{
    for(int i = len + 1; i >= 2; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = '0';
    s[1] = '0';
}

void plus(char s1[1005], int sos1, char s2[1005], int sos2)
{
    // dich so ngan hon ra sau de thuc hien phep cong
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
            dichso(len);
            s[1] = (char) temp + '0';
        }
        else s[i] = (char) temp + '0';
        nho = (int)((s1[i] - '0') + (s2[i] - '0') + nho) / 10;
    }
    if(s[0] == '0') s[0] = (char) nho + '0';
}

int main()
{
    int t = 0;
    scanf("%d\n", &t);
    while (t--)
    {
        char s1[1005];
        char s2[1005];
        gets(s1); gets(s2);
        plus(s1, strlen(s1), s2, strlen(s2));
        printf("%s\n", s);
    }
}