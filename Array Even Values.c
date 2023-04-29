#include<stdio.h>
int main()
{
    int arr[5]={3,6,7,8,9};
    int i,sum=0,count=0;
    for(i=0;i<5;i++)
    {
      if(arr[i]%2==0){
      printf("%d\n",arr[i]);
      sum+=arr[i]; //calculate sum of even value in the arr[] array.
      count++;     //Count how much even number are present in the array.
      }
    }
    printf("%d\n%d",count,sum);
    return 0;
}


