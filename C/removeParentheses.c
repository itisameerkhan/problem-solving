#include <stdio.h>
#include <string.h>
int main()
{
    int open = 0;
    int close = 0;
    int ind;
    int len;
    int start;
    int end;
    char str[500];
    scanf("%[^\n]s", str);
    len = strlen(str);

    for(start = 0, end = len - 1; start<len; start++, end--)
    {
        if(str[start] == '(')
        {
            open++;
        }
        else if(str[start] == ')')
        {
            open--;
        }
        if(str[end] == ')')
        {
            close++;
        }
        else if(str[end] == '(')
        {
            close--;
        }
        if(open < 0)
        {
            str[start] = -1;
            open = 0;
        }
        if(close < 0)
        {
            str[end] = -1;
            close = 0;
        }
    }
    for(ind = 0; str[ind]; ind++)
    {
        if(str[ind] != -1)
        {
            printf("%c",str[ind]);
        }
    }
    return 0;
}