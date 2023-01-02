#include <stdio.h>

int main() {
	int i,n;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	    scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
	    if(a[i]>0 && b[i]>0)
	        printf("Solution\n");
	    else if(a[i]==0 && b[i]>0)
	        printf("Liquid\n");
        else if(a[i]>0 && b[i]==0)
            printf("Solid\n");
        else{
            continue;
        }
	}
	return 0;
}

