#include<stdio.h>
int main()
{
    int arr[5]={5,3,7,8,1}, i;
    //int position;
    //scanf("%d",&position);
    for(i=0;i<5;i++)
    {
        if(arr[i]==7){
        int n=i;
        for(i=n;i<5;i++)
        {
           arr[i] =arr[i+1];
        }
        }

    }
arr[4]=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

