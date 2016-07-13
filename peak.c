#include<stdio.h>
#include<stdlib.h>
int main()
{
 int mid,low,high;
 int arr[] = {5, 10, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
 low=0;
 high=n-1;
 while(low<=high)
 {

    mid=(low+high)/2;
    if((mid==n-1|| arr[mid]>arr[mid+1] )&& (mid==0||arr[mid-1]<arr[mid]))
    {
        printf("Entered---------1\n");
        break;
    }
    else if(mid>0 && arr[mid]<arr[mid-1])
    {
        high=mid-1;
        printf("Entered-------2\n");
    }
    else
    {


        low=mid+1;
        printf("Entered----3\n");
 }
 }
printf("%d",arr[mid]);
    return 0;
}
