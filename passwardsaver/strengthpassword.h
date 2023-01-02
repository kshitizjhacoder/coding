#include <string.h>
#include <ctype.h>
#include <stdio.h>

int numberrepeater(const char password[10]) // to check the number repeated in the password
{
    int symb = isdigit(password[0]), ch;
    int l = strlen(password);
    for (int i = 0; i < l; i++)
    {
        ch = password[i] - '0';
        if (symb != ch)
            return 0;
    }
    return 1;
}
int alphabetrepeater(char password[10]) // to check the alpha repeater in the password
{
    char a = password[0];
    int l = strlen(password);
    for (int i = 0; i < l; i++)
    {
        if (a != password[i])
            return 0;
    }
    return 1;
}
int morerepeater(char password[10]) // to check the password have more repeater than given set
{
    char a;
    int count = 0, i, j, l = strlen(password);
    for (int i = 0; i < l; i++)
    {
        a = password[i];
        count = 0;
        for (j = 0; j < l; j++)
        {
            if (a == password[j])
                count++;
        }
        if (count >= 3)
            return count;
    }
    return 0;
}
int stringcompare(char id[20], char password[10]) // to check if it matches with the id
{
    int cmp = strcmp(id, password);
    if (cmp == 0)
        return 1;
    int l1 = strlen(id), count = 0;
    int l2 = strlen(password);
    char ch;
    for (int i = 0; i < l1; i++)
    {
        ch = id[i];
        for (int j = 0; j < l2; j++)
        {
            if (ch == password[j])
            {
                count++;
                break;
            }
        }
    }
    if (count > 4 && count < 6)
        return 8;
    else if (count > 6)
        return 3;
    return 0;
}
int specialpassword(char password[10]) // to check if it contains all the parameters
{
    int uppC = 0, lowC = 0, speC = 0, numC = 0, l = strlen(password);
    char a;
    for (int i = 0; i < l; i++)
    {
        a = password[i];
        if (a > 32 && a < 48)
            speC++;
        else if (a == 64 || a == 95)
            speC++;
        else if (a > 47 && a < 58)
            numC++;
        else if (a > 96 && a < 123)
            lowC++;
        else if (a > 64 && a < 91)
            uppC++;
        else
            continue;
    }
    if (uppC && lowC && speC && numC)
    {
        return 1;
    }
    return 0;
}
int switchrepeater(char password[10]) // numberof reptition
{
    int count = morerepeater(password);
    switch (count)
    {
    case 3:
        return 7;
        break;
    case 4:
        return 6;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 4;
        break;
    default:
        return 0;
    }
}
int strengthchecker(char id[20], char password[10])
{
    if (numberrepeater(password))
        return 2;
    else if (alphabetrepeater(password))
        return 3;
    else if (stringcompare(id, password) == 1)
        return 1;
    else if (switchrepeater(password))
        switchrepeater(password);
    else if (stringcompare(id, password) == 3)
        return 3;
    else if (stringcompare(id, password) == 8)
        return 8;
    else if (specialpassword(password))
        return 10;
    else
        return 9;
}
// to guess the password
void guesspassword(char password[10])
{
    char str[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890_!@#$%^&*?"};
    int l1 = strlen(password);
    int l2 = strlen(str);
    printf("\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (password[i] == str[j])
            {
                printf("%c", str[j]);
                break;
            }
        }
    }
    printf("\n");
}
