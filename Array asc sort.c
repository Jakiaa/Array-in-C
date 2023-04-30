#include<stdio.h>
int main()
{
    int arr[5]={5,3,7,8,1}, i,j,temp;
    for(i=0;i<5;i++)
    {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        printf("%d ",arr[i]);
    }
    return 0;
}
