#include<stdio.h>
int main()
{
    int arr[5]={5,9,7,60,3};
    int i,max,min;
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
     for(i=0;i<5;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    int diff=max-min;
    printf("%d",diff);
    return 0;
}

