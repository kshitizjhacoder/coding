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
typedef struct hashtable ht;
int hashval(int n)
{
    return n % HZ;
}
void insert(FILE *fp, ht *h, int n)
{
    EMP a;
    int i, hindex, countindex;
    for (i = 0; i < n; i++)
    {
        printf("Enter empno name and salary : ");
        scanf("%d %s %d", &(a.empno), a.name, &(a.sal));
        hindex = hashval(a.empno);
        countindex = hindex;
        while (h[hindex].key != -1)
        {
            hindex = (hindex + 1) % HZ;
            if (hindex == countindex)
            {
                printf("Insertion not possible\n");
                return;
            }
        }
        h[hindex].key = a.empno;
        fseek(fp, 0, SEEK_END);
        h[hindex].addr = ftell(fp);
        fwrite(&a, sizeof(EMP), 1, fp);
        printf("%d %s %d %ld", a.empno, a.name, a.sal, h[hindex].addr);
    }
}
void display(FILE *fp, ht *h, int n)
{
    EMP a;
    int i;
    for (i = 0; i < HZ; i++)
    {
        printf("i = %d h[hindex].key = %d\n", i, h[i].key);
        if (h[i].key = -1)
        {
            fseek(fp, h[i].addr, SEEK_SET);
            fread(&a, sizeof(EMP), 1, fp);
            printf("%d %s %d %ld", a.empno, a.name, a.sal, h[hindex].addr);
        }
    }
}
void search(FILE *fp, ht *h, int n)
{
    EMP a;
    int i, hindex, countindex;
    printf("Enter the em[no to search\n");
    scanf("%d", &(a.empno));
    hindex = hashval(a.empno);
    countindex = hindex;
    while (h[hindex].key != -1)
    {
        hindex = (hindex + 1) % HZ;
        if (countindex == hindex)
        {
            printf("Unsuccessful search\n");
            return;
        }
    }
    fseek(fp, h[hindex].addr, SEEK_SET);
    fread()
}
int main()
{
    FILE *fp;
    ht h[HZ];
    int i, n, ch;
    while (1)
    {
        printf("1.insert\n2.display\n3.search\nEnter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number of employee\n");
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
            break;
        case 3:
            search(fp, h, n);
            break;
        case 4:
            exit(0);
        }
    }
}