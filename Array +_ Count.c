#include<stdio.h>
int main()
{
    int arr[5]={5,8,1,9,3};
    int i,p=0, n=0;

    for(i=0;i<5;i++)
    {
    if(arr[i]>0)
        p++;
    else
        n++;
    }
   printf("Positive no: %d\nNegative no: %d",p,n);
    return 0;
}

