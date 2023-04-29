#include<stdio.h>
int main()
{
    int arr[5]={5,9,7,60,3};
    int i,max;
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}
