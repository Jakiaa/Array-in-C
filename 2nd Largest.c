#include<stdio.h>
int main()
{
    int arr[5]={5,8,1,9,3};
    int temp=0,i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++){
        if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        }
    }
    printf("The shorted array:");
for(i=0;i<5;i++)
{
    printf(" %d",arr[i]);
}
    printf("\nThe 2nd largest value: %d", arr[1]);
    return 0;
}
