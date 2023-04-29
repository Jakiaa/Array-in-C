#include<stdio.h>
int main()
{
    int arr[5]={5,8,1,9,3};
    int i;
    printf("Normal Print: ");
    for(i=0;i<5;i++)
    {
    printf(" %d",arr[i]);
    }
    printf("\nReverse Print: ");
    for(i=4;i>=0;i--)
    {
       printf(" %d",arr[i]);
    }
    return 0;
}
