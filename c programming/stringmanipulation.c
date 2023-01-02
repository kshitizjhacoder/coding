#include <stdio.h>
#include <string.h>
int length(char s1[]);
int compare(char s1[], char s2[]);
void concat(char s1[], char s2[]);
int main()
{
    char s1[100], s2[100];
    int len, res, count;
    printf("enter the first string\n");
    gets(s1);
    printf("enter the second string \n");
    gets(s2);
    len = length(s1);
    printf("length of the string one is %d\n", len);
    len = length(s2);
    printf("length of the secound string %d\n", len);
    res = compare(s1, s2);
    if (res == 0)
        printf("both strings are equal\n");
    else
        printf("both strings are unequal\n");
    concat(s1, s2);
    return (0);
}
int length(char s1[])
{
    int len = 0;
    while (s1[len] != '\0')
    {
        len++;
    }
    return len;
}
int compare(char s1[], char s2[])
{
    int c = 0;
    while (s1[c] == s2[c])
    {
        if (s1[c] == '\0' || s2[c] == '\0')
            break;
        else
            c++;
    }
    if (s1[c] == '\0' && s2[c] == '\0')
        return 0;
    else
        return -1;
}
void concat(char s1[], char s2[])
{
    int i, j;
    i = strlen(s1);
    for (j = 0; s2[j] != '\0'; j++, i++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("concanted string is %s", s1);
}
