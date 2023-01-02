#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10000];
    char s2[10000];
    int l,c=0,i,j;
    scanf("%s", s1);
    getchar();
    scanf("%s", s2);
    l=strlen(s1);
    if(l==strlen(s2))
    {
        for(i=0;i<l;i++)
            for(j=0;j<l;j++)
                if(s1[i]==s2[j])
                    c++;
        if(c==(l))
            printf("string is anagram");
        else
            printf("strings is not anagram");
    }
    else{
        printf("strings are not anagram");
    }
    return 0;
}