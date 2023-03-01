#include<stdio.h>
int main()
{
    int a=1,b;
    // Every time compiler only consider 2 terms. Like (++a + a++)=result; then, (result+ ++a) and continue.
    b=++a+ a+++ ++a;//+ a++;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
