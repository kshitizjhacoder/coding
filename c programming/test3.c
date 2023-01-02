#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[10000];
    char s2[10000];
    int l1,l2,c=0,i,j;
    scanf("%s", s1);
    getchar();
    scanf("%s", s2);
    l1=strlen(s1);
    if(l1==strlen(s2))
    {
        for(i=0;i<l1;i++)
            for(j=0;j<l1;j++)
                if(s1[i]==s2[j])
                    c++;
        if(c==l1)
            exit(0);
        else{
            printf("%d", (l1-c)*2);
        }
    }
    else{
        for(i=0;i<l1;i++)
            for(j=0;j<l2;j++)
                if(s1[i]==s2[j])
                    c++;
        printf("%d", (l1-c)+(l2-c));
    }
    return 0;
}