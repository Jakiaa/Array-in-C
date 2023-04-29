#include<stdio.h>
int main()
{
    int arr[5]={3,6,7,8,9};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=arr[i]; //calculate sum of every value in the arr[] array.
    }
    printf("%d",sum);
    return 0;
}
