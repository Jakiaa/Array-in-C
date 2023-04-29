#include<stdio.h>
int main()
{
    int arr[5]={5,9,7,60,3};
    int i,min;
    for(i=0;i<5;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("%d",min);
    return 0;
}

