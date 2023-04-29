#include<stdio.h>
int main()
{
    int arr[5]={3,3,7,9,9}, size;
    int i,count=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
            printf("%d\n",arr[i]);
        }
    }
    printf("%d",count);
    return 0;
}

