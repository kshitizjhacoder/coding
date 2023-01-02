#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    float a[n],b[n],c[n],d[n],s[n];
    float div;
    for(i=0;i<n;i++)
        scanf("%f %f %f %f",&a[i],&b[i],&c[i],&d[i]);
    for(i=0;i<n;i++)
    {
        s[i]=0;
        s[i]=a[i]+b[i]+c[i];
        div=ceil(s[i]/d[i]);
        printf("%.0f\n",div);
    }
    return 0;
}