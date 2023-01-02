#include <stdio.h>
#include <stdlib.h>
#define HZ 4
struct employee
{
    int empno;
    char name[20];
    int sal;
};
typedef struct employee EMP;
struct hashtable
{
    int key;
    long int addr;
};
typedef struct hashtable Ht;
int hashval(int empno)
{
    return empno % HZ;
}
void insert(FILE *fp, Ht *h, int n)
{
    EMP a;
    int i, hindex, countindex;
    for (i = 0; i < n; i++)
    {
        printf("Enter the emno,name and salary : ");
        scanf("%d %s %d", &(a.empno), a.name, &(a.sal));
        hindex = hashval(a.empno);
        countindex = hashval(a.empno);
        while (h[hindex].key != -1)
        {
            hindex = (hindex + 1) % HZ;
            if (hindex == countindex)
            {
                printf("Entry not possible\n");
                return;
            }
        }
        h[hindex].key = a.empno;
        fseek(fp, 0, SEEK_END);
        h[hindex].addr = ftell(fp);
        fwrite(&a, sizeof(EMP), 1, fp);
        printf("%d %s %d %ld \n", a.empno, a.name, a.sal, h[hindex].addr);
    }
}
void display(FILE *fp, Ht *h, int n)
{
    EMP a;
    int i, j;
    for (i = 0; i < HZ; i++)
    {
        printf("i = %d h[hindex].key = %d\n", i, h[i].key);
        if (h[i].key != -1)
        {
            fseek(fp, h[i].addr, SEEK_SET);
            fread(&a, sizeof(EMP), 1, fp);
            printf("%d %s %d %ld\n", a.empno, a.name, a.sal, h[i].addr);
        }
    }
}
void search(FILE *fp, Ht *h, int n)
{
    EMP a;
    int hindex, countindex;
    printf("Enter emp no to search\n");
    scanf("%d", &(a.empno));
    hindex = hashval(a.empno);
    countindex = hindex;
    while (h[hindex].key != a.empno)
    {
        hindex = (hindex + 1) % HZ;
        if (countindex == hindex)
        {
            printf("Search Unsuccessful");
            return;
        }
    }
    fseek(fp, h[hindex].addr, SEEK_SET);
    fread(&a, sizeof(EMP), 1, fp);
    printf("EMP detail found\n");
    printf("%d %s %d\n", a.empno, a.name, a.sal);
}
int main()
{
    FILE *fp;
    int i, n, ch = 0;
    Ht h[HZ];
    while (1)
    {
        printf("1.Insert 2.Display 3.Search 4.Exit \n ENter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the number of emp\n");
            scanf("%d", &n);
            for (i = 0; i < HZ; i++)
                h[i].key = -1;
            fp = fopen("k1.txt", "w");
            insert(fp, h, n);
            fclose(fp);
            break;
        case 2:
            fp = fopen("k1.txt", "r");
            display(fp, h, n);
            fclose(fp);
            break;
        case 3:
            fp = fopen("k1.txt", "r");
            search(fp, h, n);
            break;
        case 4:
            exit(0);
        }
    }
}