#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "the sky is blue";
    char word[] = "sky";
    int flag=strlen(word);

    for(int i=0;i<strlen(str)-strlen(word);i++)
    {
        if(str[i]==word[0])
        {
            int index = i;
            for(int j=0;j<strlen(word);j++)
            {
                if(str[index]==word[j]) flag--;
                else flag = strlen(word);
                index++;
                if(flag == 0) break;
            }
        }
        if(flag==0) break;  
    }
    printf("%d",flag);
}