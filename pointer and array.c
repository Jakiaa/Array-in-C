#include<stdio.h>
int main()
{
    int n, a[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p=&a[0];
    printf("Print array values by pointer:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
